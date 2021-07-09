// gcc -g -m32 -O0 33_format_wrong.c -o 33_format_wrong.out

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char test[1024]; 
	strcpy(test,argv[1]); 
	printf("You wrote:"); 
	printf(test); 
	printf("\n");
}