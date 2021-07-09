// cl /MD /Od /Zi /FA 14_scanf_error_check.c
// cl /MD /Od /Zi /FA /Fa14_scanf_error_check_x64 /Fe14_scanf_error_check_x64 /Fo14_scanf_error_check_x64 14_scanf_error_check.c

#include <stdio.h>

int main() {
	int x;
	printf("Enter X:\n");

	if(scanf("%d", &x)==1)
		printf("You entered %d...\n", x);
	else
		printf("woof.\n");
	return 0;
};