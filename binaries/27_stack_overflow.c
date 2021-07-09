// gcc -g -fno-stack-protector -z execstack 27_stack_overflow.c -o 27_stack_overflow.out
// gcc -g -m32 -fno-stack-protector -z execstack 27_stack_overflow.c -o 27_stack_overflow.out

#include <stdio.h>
#include <stdlib.h>

void echo(void) 
{
	printf("Enter some text:\n");
	char buffer[16]; // 16 byte buffer stored on the stack
	gets(buffer); //retrieve user input and store in the buffer
	printf("%s\n", buffer); //print out the user input as a string
	return;
}


void main(void)
{
	echo();
	exit(0);
}