#include<stdio.h>
main () {
	int birth_year;
    int this_year;
	
	printf("Input birth year : ");
	scanf("%d",&birth_year);
	printf("Input this year : ");
	scanf("%d",&this_year);
	
	int age=this_year-birth_year;
	
	printf("You age is:%d\n",age);
	
	if (age<=20) {
		printf("You are Young\n");
	}
	else if(age>20) {
		printf("You are adult\n");
}
}
