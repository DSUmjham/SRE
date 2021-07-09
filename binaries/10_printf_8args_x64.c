// gcc -g -O0 10_printf_8args_x64.c -o 10_printf_8args_x64.out
// cl /MD /Od /Zi /FA 10_printf_8args_x64.c

#include <stdio.h>

int main() {
	printf("a=%d; b=%d; c=%d; d=%d; e=%d; f=%d; g=%d; h=%d\n", 1, 2, 3, 4, 5, 6, 7, 8);
	return 0;
};