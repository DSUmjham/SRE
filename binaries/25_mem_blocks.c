//gcc -g -Os 25_mem_blocks.c -o 25_mem_blocks.out

#include <stdio.h>

void my_memcpy (unsigned char* dst, unsigned char* src, size_t cnt){
	size_t i;
	for (i=0; i<cnt; i++)
		dst[i]=src[i];
};

int main() {
	char orig[50] = "Mike Ham";
	char copy[50] = "";

	my_memcpy (copy, orig, 4);
	printf("orig: %s\n", orig);
	printf("copy: %s\n", copy);
};

