// cl /MD /Od /Zi /FA 13_scanf_global_init.c

#include <stdio.h>

int x = 10; //initialized global variable

int main() {
	printf("Enter X:\n");
	scanf("%d", &x);
	printf("You entered %d...\n", x);
	return 0;
};