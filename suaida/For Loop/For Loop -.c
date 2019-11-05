#include<stdio.h>
main (){
	int i,num;
	printf("how many number?\n");
	scanf("%d",&num);
	
	for (i=10;i>=num;i--){
		printf("%d\n",i);
	}
}
