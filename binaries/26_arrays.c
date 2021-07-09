// cl /MD /Od /Zi /FA 26_arrays.c
// cl /MD /Od /Zi /FA /Fa26_arrays_RTC /Fe26_arrays_RTC /Fo26_arrays_RTC /RTC1 /RTCs 26_arrays.c

#include <stdio.h>

int main() {
	int a[20]; //how many bytes is this, what does it look like hex?
	int i;

	for (i=0; i<20; i++)
		a[i]=i*2;
	for (i=0; i<20; i++)
		printf ("a[%d]=%d\n", i, a[i]);

	return 0; 
};
