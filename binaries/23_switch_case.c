// cl /MD /Od /Zi /FA 23_switch_case.c
// cl /MD /Ox /FA23_switch_case_Ox /FE23_switch_case_Ox /Fo23_switch_case_Ox 23_switch_case.c

#include <stdio.h>

void f (int a){
	if (a==0)
		printf ("zero\n");
	else if (a==1)
		printf ("one\n");
	else if (a==2)
		printf ("two\n");
	else
		printf ("something unknown\n");
};

int main(){
	f(2);
};
