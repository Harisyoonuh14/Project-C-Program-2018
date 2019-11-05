#include<stdio.h>
#include<conio.h>
#include<math.h>

	float circle (float r){
		float c,p=3.14;
		c=p*(r*r);
		return c;
	}
	
	float triangle (float a1, float b1){
		float c1;
		c1=0.5*a1*b1;
		return c1;
	}
	
	float ractangle (float p){
		float c2,s;
		c2=p*p;
		return c2;
	}
	
	main(){
		int se;
		system("cls");
		printf("\n\t====================================================");
	    printf("\n\t\t\t\tWellcome");
		printf("\n\n\t\t1.Formula Circle");
		printf("\n\t\t2.Formula Triangle");
		printf("\n\t\t3.Formula Ractangle");
		printf("\n\n\t====================================================");
		printf("\n\t\tSELECT THE NUMBER TO SHOW : ");
		scanf("%d",&se);
		
		system("cls");
		
		if(se==1){
			int circle1;
			printf("\n\t====================================================");
			printf("\n\t\t\t1.Formula Circle");
			printf("\n\n\t\tEnter the number of radias: ");
			scanf("%d",&circle1);
			printf("\n\t\tResult of circle is %.1f\n",circle(circle1));
			printf("\n\n\t====================================================");
		    printf("\n\tGo Back To Menu Press 1: ");
		    switch (getch())
		    case '1': main();
		}
		
		else if(se==2){
			int b,h;
			printf("\n\t====================================================");
			printf("\n\t\t\t2.Formula Triangle");
			printf("\n\n\t\tEnter the number of base: ");
			scanf("%d",&b);
			printf("\n\t\tEnter the number of hight: ");
			scanf("%d",&h);
			printf("\n\n\t\tResult of triangle is %.1f\n",triangle(b,h));
			printf("\n\n\t====================================================");
		    printf("\n\tGo Back To Menu Press 1: ");
		    switch (getch())
		    case '1': main();
		}
		
		else if(se==3){
			int rac;
			printf("\n\t====================================================");
			printf("\n\t\t\t3.Formula Ractangle");
			printf("\n\n\t\tEnter the number of side: ");
			scanf("%d",&rac);
			printf("\n\n\t\tResult of ractangle is %.1f\n",ractangle(rac));
			printf("\n\n\t====================================================");
		    printf("\n\tGo Back To Menu Press 1: ");
		    switch (getch())
		    case '1': main();
		}
		
	    else {
	    	printf("\n\t\tENTER AGAIN !!!");
	    	switch (getch())
	        default :main();
		}

		
		
		
	}
