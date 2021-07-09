// cl /MD /Od /Zi /FA 23_switch_case_sw.c
// cl /MD /Ox /FA23_switch_case_sw_Ox /FE23_switch_case_sw_Ox /Fo23_switch_case_sw_Ox 23_switch_case_sw.c

#include <stdio.h>

void f (int a){
	switch(a)
	{
		case 0: printf("zero\n");
			break;
		case 1: printf("one\n");
			break;
		case 2: printf("two\n");
			break;
		default: printf("something unknown\n");
			break;	
	}
};

int main(){
	f(2);
};
