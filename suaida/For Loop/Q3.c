#include<stdio.h>
main(){
	int i,j,number;
	loop1:
	printf("===============================\n");
	printf("1.Odds number\n");
	printf("2.Even number\n");
	printf("===============================\n");
	printf("Select to show 1 or 2?\n");
	printf("-------------------------------\n");
	printf("Enter number : ");
	scanf("%d",&number);
	
	if (number==1) {
		printf("Odds number :\n");
		for (i=1;i<=999;i+=2){
			printf(" %d",i);
		}printf("\n");
	}
   else if (number==2){
   	    printf("Even number :\n");
   	    for (j=2;j<=1000;j+=2){
   	    	printf(" %d",j);
	    }
   }goto loop1;

}
