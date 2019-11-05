#include <stdio.h>
main (){
	double a=12.3;
	float b=24.6;
	long int c=3;
	char d='a';
	short e=4;
	int f=26;
	float aa,bb,cc,dd;
	aa=a+b+c+d+e+f;
	printf("3.1 answer is\t%f\n",aa);
	
	bb=e/c+f;
	printf("3.2 answer is\t%f\n",bb);
	
	cc=b/c+e+a;
	printf("3.3 answer is\t%f\n",cc);

	dd=(a+b)/c+d-e*f;
	printf("3.4 answer is\t%f\n",dd);

}
