// gcc -g -m32 -O0 18_void_rand.c -o 18_void_rand.out

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	printf("hello, void\n");

	srand(time(NULL));
	rand();
	rand();
	rand();
};