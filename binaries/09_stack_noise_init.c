//gcc -g -m32 -O0 09_stack_noise_init.c -o 09_stack_noise_init.out

#include <stdio.h>

void f1()
{
	int a=1, b=2, c=3;
	printf("%d, %d, %d\n", a, b, c);
};

void f2()
{
	int x, y, z;
	printf("%d, %d, %d\n", x, y, z);
};

int main()
{
	f1();
	f2();
}
