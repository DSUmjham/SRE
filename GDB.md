

# GDB & Peda Cheat Sheet
This guide is written to help Kali users get started with GDB and the Peda plugin once they are installed.  Another guide that is easy to follow is [Marc Haisenko's GDB cheatsheet](https://darkdust.net/files/GDB%20Cheat%20Sheet.pdf).
* [Generic GDB and Peda Commands](#Generic-GDB-and-Peda-Commands)
* [Working with Breakpoints](#Working-with-Breakpoints)
* [Stepping and Navigation](#Stepping-and-Navigation)
* [Displaying Bytes](#Displaying-Bytes)
    * [Format (f)](#Format-(f))
    * [Unit (u)](#Units-(u))
    * [Examples](#Examples)
* [Where](#where)

## Generic GDB and Peda Commands
|Description | Command |
|--|--|
|Open an executable for debugging | `gdb <program>` |
|List functions|`info func`|
| Pass arguments to program	| `set args <args>`|
| Run program to be debugged | `run`|
|Disassemble current function| `disassemble`|
|Disassemble with Peda highlighting | `pdis`|
|Show Peda registers context|`context reg`|
|Show Peda code context|`context code`|
|Show Peda stack context|`context stack`|
|Show all Peda context (reg, code, stack) | `context all`|
|Restore session saved by Peda | `session restore <file>`

## Working with Breakpoints
|Description | Command |
|--|--|
|Set breakpoint | `console b <where>`  |
|List breakpoints | `i b` |
|Delete single breakpoint | `d <breakpoint#>`|
|Delete all breakpoints | `clear`|
|Disable breakpoint | `disable <breakpoint#>`|
|Enable breakpoint | `enable <breakpoint#>` | 

## Stepping and Navigation
|Description | Command |
|--|--|
|Step instruction (source line), diving into function | `step`|
|Step to next instruction, don't dive into function | `next`|
|Continue normal execution | `continue`|
|Continue until function returns | `finish`

## Displaying Bytes
|Description | Command|
|--|--|
|Display memory contents at location (n=number of units, f=format, u=unit) | `x /nfu <address>`
### Format (f)
* a - address
* c - char
* d - decimal
* f - floating point
* i - instruction
* o - octal
* s - string
* t - binary
* u - unsigned decimal
* x - hexadecimal

### Unit (u)
* b - byte
* h - half-word or nibble (2 bytes)
* w - word (4 bytes)
* g - giant word (8 bytes)

### Examples
1. Print out 32 words of hex beginning at ESP:  
`x /32xw $esp`
2. Dump 16 bytes of binary beginning at ESP - 0xC: 

`x /16tb $esp-0xC`

3. Print what is at EAX as a string: 

`x /s $eax`

## Where
| Description | Format|
|--|--|
|Function name (e.g. main) | `main`|
|Function + line number (e.g. main+37) | `*main+37`|
|Memory address (e.g. 0x00001234) | `*0x00001234`



