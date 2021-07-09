// gcc n_test.c -g -o n_test.out

#include <stdio.h>

int main()
{
	int c;
	printf("What does %n do? ", &c);
	printf("%d\n", c);
	return 0;
}
