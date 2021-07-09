// cl /MD /Od /Zi /FA 12_scanf_global_uninit.c

#include <stdio.h>

int x; //unitialized global variable

int main() {
	printf("Enter X:\n");
	scanf("%d", &x);
	printf("You entered %d...\n", x);
	return 0;
};