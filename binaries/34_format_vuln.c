//gcc -g -m32 -w -Wno-format -Wno-format-security -fno-stack-protector -z norelro  34_format_vuln.c -o 34_format_vuln.out

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
	char buf[80];
	static int var = 42;

	printf("The value is at: [0x%08x]\n", &var);
	strcpy(buf, argv[1]);	
	printf(buf);
	printf("\nvar is %d [0x%08x]\n", var, var);

	return 0;	
}
