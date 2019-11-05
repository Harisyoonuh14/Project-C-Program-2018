#include<stdio.h>
main(){	
float weight,hight,BMI,m,m2;
	loop1:
	printf("Enter your weight : ");
	scanf("%f",&weight);
	printf("Enter your hight : ");
	scanf("%f",&hight);

	
    m=hight/100;
    m2=m*m;
	BMI=weight/m2;
	
	printf("-----------*****----------\n");
	printf("BMI is %.2f\n",BMI);
	
	if (BMI<18.5) {
		printf("You are : Thin\n");
	}
	else if (BMI<=24.99) {
		printf("You are : Normal weight\n");
	}
	else if (BMI<=29.99) {
		printf("You are : Overweight\n");
	}
	else if (BMI<=39.99) {
		printf("You are : Obesity\n");
	}
	else {
		printf("You are : Merbid Obesity\n");
	} 
	printf("=============================\n");
	goto loop1;
	
}
