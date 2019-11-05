#include<stdio.h>
main(){
	int no1,no2;
	int total;
	printf("Input number1 is: ");
	scanf("%d",&no1);
	printf("Input number2 is: ");
	scanf("%d",&no2);
	
	total=no1-no2;
	
	printf("%d-%d=%d\n",no1,no2,total);
	
	if (total>0) {
	printf("Result is POSITIVE NUMBER\n");
	}
	else if (total<0){
		printf("Result is NEGATIVE NUMBER\n");
	}
	else if (total==0){
		printf("Result is ZERO NUMBER\n");
	}
}
