//gcc -g -m32 -O0 08_stack_noise_uninit.c -o 08_stack_noise_uninit.out

#include <stdio.h>

void f1()
{
	int a, b, c;
	printf("%d, %d, %d\n", a, b, c);
};

void f2()
{
	int a=1, b=2, c=3;
};

int main()
{
	f1();
	f2();
}
