#include<stdio.h>
main(){
	int i,j,number,sum=0,average;
	printf("how many student do you want to add ? \n");
	scanf("%d",&number);
	
	int score;
	
for (i=1; i<=number; i++){
	
		printf("enter score %d : ",i);
		scanf("%d",&score);
		
		sum=sum+score;
	
	}

    average=sum/number;
	printf("Total all score : %d\n",sum);
	printf("Average is : %d",average);
}
