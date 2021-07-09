// cl /Od /Fe15_function_args_no_debug 15_function_args.c
// cl /MD /Od /Zi /FA 15_function_args.c
// cl /MD /Ox /Zi /FA /Fa15_function_args_x64 /Fe15_function_args_x64 /Fo15_function_args_x64 15_function_args.c

#include <stdio.h>

int f (int a, int b, int c)
{
	return a*b+c;
};

int main() {
	printf ("%d\n", f(1, 2, 3));
	return 0;
};