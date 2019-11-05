#include <stdio.h>
main (){
	int a=10;
	int b=1;
	a=a&b;
	printf("5 answer is\t%d\n",a,b);
	
	a=a<b&&b>a;
	printf("5 answer is\t%d\n",a,b);
	
	a=a|b;
	printf("5 answer is\t%d\n",a,b);

	a=a>b||b<a;
	printf("5 answer is\t%d\n",a,b);
	
	printf("5.1Explain the different between 10&1  with 10&&1\n");
	printf("10&1 = ?\n");
	printf("10=00001010 & 1=0000001\n\t");
	printf("answer 10&1=0\n");
	printf("10&&1 = ?\n");
	printf("10=1 & 1=1\n\t");
	printf("answer 10&&1=1\n");
	
	
	
	printf("5.2 Explain the different between 10|1  with 10||1\n");
	printf("10|1 = ?\n");
	printf("10=00001010 | 1=0000001\n\t");
	printf("answer 10|1=1\n");
	printf("10||1 = ?\n");
	printf("10= || 1=\n\t");
	printf("answer 10||1=1\n");
	
	
	
	
	
	
	
	 
	
	
}
