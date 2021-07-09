// cl /MD /Od /Zi /FA 24_for_loops.c
// cl /MD /Ox /Zi /FA /Fa24_for_loops_Ox /Fe24_for_loops_Ox /Fo24_for_loops_Ox 24_for_loops.c

#include <stdio.h>

void printing_function(int i)
{
	printf ("f(%d)\n", i);
};

int main() {
	int i;
	for (i=2; i<10; i++)
		printing_function(i);
	return 0;
};