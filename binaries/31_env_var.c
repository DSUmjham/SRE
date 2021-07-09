// gcc -g -m32 31_env_var.c -o 31_env_var.out

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char buffer[20]; // create a 20 byte buffer to hold the contents of HOME
	strcpy(buffer, getenv("HOME")); // get the HOME environment variable
	printf("HOME = %s\n", buffer); // print out the value
}
