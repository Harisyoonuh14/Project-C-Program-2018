#include<stdio.h>
main (){
	int i,num;
	printf("how many number?\n");
	scanf("%d",&num);
	
	printf("True\n");
	
	for (i=1;i<=num;i++){
		printf("2*%d = %d\n",i,i*2);
	} printf("false\n");
	

	num=num*2;
	printf("%d",num);
}
