// cl /MD /Od /Zi /FA 11_scanf.c
// gcc -g -m32 -O0 11_scanf.c -o 11_scanf.out
// cl /MD /Od /Zi /FA /Fa11_scanf_x64 /Fe11_scanf_x64 /Fo11_scanf_x64 11_scanf.c
// gcc -g -O1 11_scanf.c -o 11_scanf_64.out

#include <stdio.h>

int main() {
	int x;
	printf("Enter X:\n");
	scanf("%d", x);
	printf("You entered %d...\n", x);
	return 0;
};