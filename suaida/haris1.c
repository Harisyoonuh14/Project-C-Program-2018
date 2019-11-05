#include <stdio.h>
main (){
	int a=9, b=6, c=0;
	c=(a++)+(++b);
	printf("%d\t%d\t%d\n",a,b,c);
	
	c=(--a)-(--b);
	printf("%d\t%d\t%d\n",a,b,c);
	
	c= ++a;
	c=c - b--;
	c=c + --a;
	c=c - ++b;
	
	printf("%d\t%d\t%d\n",a,b,c);
	printf("answer is B");
	 
}
