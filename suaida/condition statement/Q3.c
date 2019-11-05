#include<stdio.h>
main (){
	int hours;
	int money=30;
	int extra=15; /*the extra to 1.5 times the normal hours of work*/


	printf("Input your work hour:");
	scanf("%d",&hours);
	
	int nomal=hours*money;
	
	if (hours<=8) {
		printf("You got wage is:%d\n",nomal);
	}
	else if(hours>8) {
	
	int extra_H=hours-8;
	int nomal2=nomal+(extra_H*extra);
	
		printf("You got the extra wage is:%d baht\n",nomal2);
}
}
