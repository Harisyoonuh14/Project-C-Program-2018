# include <stdio.h>
      int main() {
      int h; 
	  int m1=40,m2=30,m3=20;
	  	int total1,total2;
printf("Input parking hour: ");
scanf("%d",&h);



   if (h<3) {
   	total1=h*m1;
   	printf("You have to pay: %d baht\n",total1);
   }
   else if (h<=5) {
   	total2=((h-2)*m2)+80;
   	
   	printf("You have to pay: %d baht\n",total2);
   }
    else if (h>=6) {
    int total3=((h-5)*m3)+170;
   	printf("You have to pay: %d baht\n",total3);
   }
   }

