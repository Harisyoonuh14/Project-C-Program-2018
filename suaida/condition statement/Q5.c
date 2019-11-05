#include<stdio.h>
main (){
	int age=10,kid,y,ad;
	int t=3,d=4;
	
	 printf("Input your age:%d\n",age);
	 
	 int td=t*d;
	 
	 if (age<=5) {
		kid=0.5*td;
	 	printf("You got drug : %d tebs",kid);
	 }
	 else if (age<=15) {
	 	y=1*td;
	 	printf("You got drug : %d tebs",y);
	 }
	 else if (age>15) {
	 	ad=2*td;
	 	printf("You got drug : %d tebs",ad);
	 }
}
