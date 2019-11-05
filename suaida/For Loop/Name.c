#include<stdio.h>
main (){
	int i,num;
	loop1:
	printf("how many number?\n");
	scanf("%d",&num);
	
	printf("============\n");
	
	for (i=1;i<=num;i++){
		printf("%d.Haris\n",i);
	}
	goto loop1;
}
