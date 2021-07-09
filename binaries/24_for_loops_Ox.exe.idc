#include <idc.idc>
static main()
{
	SetColor (0x401040, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401040, "ESI=1");
	SetColor (0x401041, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401041, "EDI=0x4054a0");
	SetColor (0x401042, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401042, "[406220h]=0x73aa20c1");
	SetColor (0x401048, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401048, "");
	SetColor (0x40104d, CIC_ITEM, 0xffdfdf);
	MakeComm (0x40104d, "[ECX]=0x331cd0");
	SetColor (0x401050, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401050, "ESI=2..9");
	SetColor (0x401051, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401051, "405000h=0x405000, \"f(%d)\\n\"");
	SetColor (0x401056, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401056, "op1=MSVCR90.dll!printftracing nested maximum level (1) reached, skipping this CALL");
	SetColor (0x401058, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401058, "ESI=2..9");
	SetColor (0x401059, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401059, "ESP=0x18ff38");
	SetColor (0x40105c, CIC_ITEM, 0xffdfdf);
	MakeComm (0x40105c, "ESI=3..0xa");
	SetColor (0x40105f, CIC_ITEM, 0xffdfdf);
	MakeComm (0x40105f, "SF=false,true OF=false");
	SetColor (0x401061, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401061, "");
	SetColor (0x401062, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401062, "");
	SetColor (0x401064, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401064, "");
	SetColor (0x401065, CIC_ITEM, 0xffdfdf);
	MakeComm (0x401065, "EAX=0");
}
