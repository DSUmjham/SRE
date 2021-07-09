//TODO write a description for this script
//@Chis Eagle and Kara Nance 
//@category Binary
//@keybinding 
//@menupath 
//@toolbar 

import ghidra.app.script.GhidraScript;
import ghidra.program.model.util.*;
import ghidra.program.model.reloc.*;
import ghidra.program.model.data.*;
import ghidra.program.model.block.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.scalar.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.lang.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.address.*;
import ghidra.program.database.mem.FileBytes;
import ghidra.program.database.mem.*;
import java.io.*;
import java.util.*;

public class Binary_Export extends GhidraScript {

	public void run() throws Exception {
		Memory mem = currentProgram.getMemory();
		java.util.List<FileBytes> fbytes = mem.getAllFileBytes(); // get list of file bytes
		if (fbytes.size() != 1) {
			return;
		}
		FileBytes fb = fbytes.get(0); // file bytes for the first program imported into Ghidra
		File of = askFile("Choose output file", "Save"); // prompt of where to save the output file at
		FileOutputStream fos = new FileOutputStream(of, false); 
		writePatchFile(fb, fos);
		fos.close();
	}

	public void writePatchFile(FileBytes fb, OutputStream os) throws Exception {
		Memory mem = currentProgram.getMemory();
		Iterator<Relocation> relocs;
		relocs = currentProgram.getRelocationTable().getRelocations(); // obtain a program relocation table iterator
		HashSet<Long> exclusions = new HashSet<Long>();
		while (relocs.hasNext()) {
			Relocation r = relocs.next();
			AddressSourceInfo info = mem.getAddressSourceInfo(r.getAddress()); // get AddressSourceInfo for each relocation entry
			for (long offset = 0; offset < r.getBytes().length; offset++) {
				exclusions.add(info.getFileOffset() + offset); //file offset of each relocation byte
			}
		}
		saveBytes(fb, os, exclusions); // save the final patched version
	}

	public void saveBytes(FileBytes fb, OutputStream os, Set<Long> exclusions) throws Exception {
		long begin = fb.getFileOffset();
		long end = begin + fb.getSize();
		for (long offset = begin; offset < end; offset++) { // iterate over entire range of file bytes
			int orig = fb.getOriginalByte(offset) & 0xff; // obtain the original byte value
			int mod = fb.getModifiedByte(offset) & 0xff; // get the current byte value
			if (!exclusions.contains(offset) && orig != mod) { // if bytes are different and not associated with relocation enry
				os.write(mod); // write new bytes
			}
			else {
				os.write(orig); // write old bytes
			}
		}
	}
}
