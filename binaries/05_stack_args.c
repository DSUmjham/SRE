// gcc -g -m32 -O0 05_stack_args.c -o 05_stack_args.out
// cl /MD /Od /Zi /FA 05_stack_args.c

#include <stdio.h>

int main() {
	int a = 1;
	int b = 2;
	int c = 3;
	printf("%d, %d, %d\n", a, b, c);
};