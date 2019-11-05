#include <stdio.h>
main (){
	int a=7, b=5, c=3, d=6;
	int aaa,aa,bb,cc,dd;
	aaa=-5+4*(20%6);
	printf("2.1 answer is\t");
	printf("%d\n",aaa);
	
	aa=(-5*(192/3)+7)-4%10*2;
	printf("2.2 answer is\t");
	printf("%d\n",aa);
	
	bb=-10+(++a)-7+3*2%7*2;
	printf("2.3 answer is\t");
	printf("%d\n",bb);
	
	cc=++b+d--%2*(++c*4-1)/2;
	printf("2.4 answer is\t");
	printf("%d\n",cc);
	
	dd=2*5%3/2*(++c/2*d-- -8);
	printf("2.5 answer is\t");
	printf("%d\n",dd);
	
}
