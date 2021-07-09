// gcc -g -fno-stack-protector -z execstack 30_shellcode_256.c -o 30_shellcode_256.out
// gcc -g -m32 -fno-stack-protector -z execstack 30_shellcode_256.c -o 30_shellcode_256.out

#include <stdio.h>
#include <stdlib.h>

void echo(void) 
{
	printf("Enter some text:\n");
	char buffer[256]; 
	gets(buffer);
	printf("%s\n", buffer);
	return;
}


void main(void)
{
	echo();
	exit(0);
}
