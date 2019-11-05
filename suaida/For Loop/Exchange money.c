#include<stdio.h>
main() {
	int num,t1,t2,t3,t4,t5,t6,t7,t8,t9;
	char *y;

	printf("=============================================\n");	
	printf(" You want to exchange money Thai bath?\n");
	printf("\n\npress Enter to continue !!!!");
	getch();
	system("cls");
	printf("=============================================\n");	
	loop1:
	printf("Enter number of money from 1 to 100,000 Bath\n");
	scanf("%d",&num);

	printf("=============================================\n");	
	printf("%d Bath in Thai you will get\n",num);
	printf("=============================================\n");
	
	t1=num/1000;
	printf("| %d one thousand banknote\n",t1);
	
	num=num%1000;
	t2=num/500;
	printf("| %d five hundred banknote\n",t2);
	
	num=num%500;
	t3=num/100;
	printf("| %d one hundred banknote\n",t3);
	
	num=num%100;
	t4=num/50;
	printf("| %d fifty banknote\n",t4);
	
	num=num%50;
	t5=num/20;
	printf("| %d twenty banknote\n",t5);
	
	num=num%20;
	t6=num/10;
	printf("| %d ten coins\n",t6);
	
	num=num%10;
	t7=num/5;
	printf("| %d five coins\n",t7);
	
	num=num%5;
	t8=num/2;
	printf("| %d two coins\n",t8);
	
	num=num%2;
	t9=num/1;
	printf("| %d one coins\n",t9);
	
	printf("=============================================\n");
	printf("*****If you want to exchange money again******\n");
	printf("=============================================\n");
    printf("\n\n press Enter to continue !!!!\n\n");
	getch();
	system("cls");
goto loop1;
}
