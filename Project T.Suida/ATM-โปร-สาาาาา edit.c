#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void menu();
void no1();
void no2();
void no3();
void no4();
void no5();
void done();
unsigned long amount=50000,deposit,withdraw;
int choice,pin,k;
char transaction[10];
int main()
{
	list();
	return 0;
}
	int list(){
	
	printf("\n");
    printf("\n\n\t\t\t===================================================================================\n");
    printf("\n\t\t\t\t [***___ WELCOME TO SALSABILA ATM SERVICE___***]");
    printf("\n\n\t\t\t===================================================================================\n");
	
	 //put pasword


	 	printf("\n\t ENTER YOUR SECRET PIN NUMBER: \t");
	 	scanf("%d",&pin);
	 	printf("\t======================================================================================\n");

if (pin==592431001) {
 menu();
}
else {
	printf("PLEASE ENTER VALID PASSWORD\n");
}	
}
void menu()
{

		system("cls");
		
		printf("\n\t\t======================================================================================");
		printf("\n\t\t\t\t\t SALSABILA ATM SERVICE");
		printf("\n\t\t=======================================================================================\n");
		printf("\n\t\t*******Welcome to SALSABILA ATM Service**********\n");
		printf("\t\t**                                             **\n");
		printf("\t\t**      1.Check Balance                        **\n");
		printf("\t\t**      2.Check Accout                         **\n");
		printf("\t\t**      3.Withdraw Cash                        **\n");
		printf("\t\t**      4.Deposit Cash                         **\n");
		printf("\t\t**      5.Quit                                 **\n");
		printf("\t\t**                                             **\n");
		
		printf("\t\t**************************************************\n");
		printf("\t\t**************************************************\n\n");
		printf("\t\tEnter your choice:");
		switch (getch()){
			case '1' : no1();break;
			case '2' : no2();break;
			case '3' : no3();break;
			case '4' : no4();break;
			case '5' : no5();break;
			default : menu();break;
		}
}		

void no1(){
unsigned long amount=50000,deposit,withdraw;
      system("cls");
	printf("\n\n\t\t********************************************************************\n");
	printf("\n YOUR BALANCE:$%Lu  \n\n",amount);
	printf("\t\t************************************************************************\n\n");
	printf("\t\tEnter N To Return The Menu : ");
	switch (getch()){
		case 'n' : menu();break;
		default : no1();break;
	}
}
void no2(){
system("cls");
	    printf("\n\t\t**********************************************************************\n");
	    printf("\t\t*   Accout information   *\n");
	    printf("\t\t*                         *\n");
	    printf("\t\t*   ACCOUNT NO:592431001   *\n");
	    printf("\t\t* NAME : SABINA ");
	    printf("\n\t\t*  BRANCH : PATTANI");
	    printf("\n\t\t*                              *\n");
	printf("\t\t****************************************************************************\n\n");
		printf("\t\tEnter N To Return The Menu : ");
		switch (getch()){
		case 'n' : menu();break;
		default : no1();break;
	}
	}
void no3(){
	 printf("\n ENTER THE AMOUNT TO WITHDRAW: $");
	    scanf("%lu",withdraw);
	printf("\t\t*****************************************************************************");
	
	
	if (withdraw %100!=0)
		{
		printf("\n\n\t\t=========================================================================\n");
			printf("\n\t\t PLEASE ENTER THE AMOUNT IN MULTIPLES OF $100");
		printf("\n\t\t===========================================================================\n");
		
		}  //caculater//
		
	else if (withdraw>(amount=500)) 
		{
			
        printf("\n INSUFFICENT BALANCE");
        
		}
		
	else
	{
    	amount=amount-withdraw;
    printf("\n\n\t\t==========================================================================\n");
   	printf("\n\n\t\t\t PLEASE COLLECT CASH");
   	printf("\n\n\t\t==========================================================================\n");
	printf("\n YOUR CURRENT BALANCE IS $%Lu",amount);
	}
	printf("\n\t\t============================================================================");
	printf("\n\t\tEnter N To Return The Menu : ");
		switch (getch()){
		case 'n' : menu();break;
		default : no1();break;
	}
}
void no4(){system("cls");
unsigned long amount=50000,deposit,withdraw;
	printf("\n\n\t\t*******************************************************************************\n");
	printf("\t\t\t ENTER THE AMOUNT TO DEPOSIT");
	scanf("%lu",&deposit);
	printf("\t\t**********************************************************************************\n");
	printf("\n\t\t================================================================================\n");
	
	
	amount=amount+deposit;
	printf("\n\t\t  YOUR BALANCE IS %lu",amount);
	printf("\n\n\t\t=============================================================================\n\n");

	printf("\n\t\tEnter N To Return The Menu : ");
		switch (getch()){
		case 'n' : menu();break;
		default : no1();break;
	}
}
void no5(){system("cls");
printf("\t\t\n\n#######################################################################################\n\n\n");
printf("\t\t\n\n***THANK YOU FOR USING SALSABILA ATM BANK***SERVICES\n\n");
printf("\t\t\n\n#######################################################################################\n\n\n");
printf("\t\t\t\t\t***\n\n\n\n\n");
printf("programming Made by [---SALSABILA---]");
printf("\nGo To the menu : ");
switch (getch()){
	default : menu();
}	    
}


