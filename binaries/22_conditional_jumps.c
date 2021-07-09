// cl /Ob0 /Zi /FA 22_conditional_jumps.c

#include <stdio.h>

void f_signed (int a, int b)
{
	if (a>b)
		printf ("a>b\n");
	if (a==b)
		printf ("a==b\n");
	if (a<b)
		printf ("a<b\n");
};
void f_unsigned (unsigned int a, unsigned int b)
{
	if (a>b)
		printf ("a>b\n");
	if (a==b)
		printf ("a==b\n");
	if (a<b)
		printf ("a<b\n");
};
int main() {
	f_signed(1, 2);
	f_unsigned(1, 2);
	return 0;
};