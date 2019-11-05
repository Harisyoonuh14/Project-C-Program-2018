#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
int menu();
void nike();
void nike1();
void nike2();
void nike3();
void add1();
void van1();
void puma();
void adid();
void vanz();
void pumm();
void reeb(); 
void asic();
void newb();
int main(){
     menu();
     return 0;
}

int menu(){	
	int shoe=0;
		system("cls");
	printf("\n\n\n\t\t\t\t   ONLINE SHOES STORE SYSTEM");
	printf("\n\t\t===================================================================");
	printf("\n\t\t###\t\t\tFULFILSHOESSHOPZ.         \t\t###");
	printf("\n\n\n\n\t\t\t    ");
	printf("\n\n\t\t\t    ");
	printf("\n\n\n\t\t\t\t\t\t MENU  ");
	printf("\n\n\n\t\t   ");
	printf("\n\n\n\n\t\t###\t\t\tPAGE: FULFILSHOESSHOPZ.\t\t\t###");
	printf("\n\t\t====================================================================");
	printf("\n\t\tPRESS 1 TO SEE ANY BRANDS : ");
		switch(getch()){
			case'1':nike();
				break;
			default:menu();
				break;
		}
	return shoe;
}

void nike(){
		system("cls");
	int brand; 

	printf("\n\n\n\t\t\t\t   ONLINE SHOES STORE SYSTEM");
	printf("\n\t\t===================================================================");
	printf("\n\t\t###\t\t\t     BRANDS        \t\t\t###");
	printf("\n\n\n\t\tCHOOSE BRANDS DO YOU WANT :");
	printf("\n\n\t\t\t   1.  NIKE");
	printf("\n\n\t\t\t   2.  ADIDAS");	
	printf("\n\n\t\t\t   3.  CONVERSE");
	printf("\n\n\t\t\t   4.  VANS");	
	printf("\n\n\t\t\t   5.  PUMA");
	printf("\n\n\t\t\t   6.  REEBOK");	
	printf("\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");
	printf("\n\t\tENTER THE NUMBER TO CHOOSE BRANDS  : ");
		scanf("%d",&brand);
		
		system("cls");	
		if(brand==1){
	float size=27.0, size1=25.5, size2=24.5;
	int pri=2590, pri1=1990, pri2=2290;
	printf("\n\n\n\t\t\t\t   ONLINE SHOES STORE SYSTEM");
	printf("\n\t\t===================================================================");
	printf("\n\t\t###\t\t\tFULFILSHOESSHOPZ.         \t\t###");
	printf("\n\n\n\t\t    BRANDS:                      SIZE:               PRICE(BAHT):");
	printf("\n\n\n\t\t   1.  Nike Air Max 270         %.1f cm.               %d.-",size,pri);
	printf("\n\n\n\t\t   2.  Nike Free x  Metcon      %.1f cm.               %d.-",size1,pri1);
	printf("\n\n\n\t\t   3.  Nike Rose Run            %.1f cm.               %d.-",size2,pri2);
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");	
	printf("\n\t\tENTER THE NUMBER TO CHOOSE THE SHOES/  PRESS 0 TO RETURN : ");
		switch(getch()){ 

			case'1':nike1();
				break;
			case '2' : nike2();break;
			case '3' : nike3();break;
			default:nike();
				break;
		}	
	}
		else if(brand==2){
	float size3=26.0;
	int pri3=5790;
	printf("\n\n\n\t\t\t\t   ONLINE SHOES STORE SYSTEM");
	printf("\n\t\t===================================================================");
	printf("\n\t\t###\t\t\tFULFILSHOESSHOPZ.         \t\t###");
	printf("\n\n\n\t\t    BRANDS:                      SIZE:               PRICE(BAHT):");
	printf("\n\n\n\t\t   1.  Adidas NMD r1 black      %.1f cm.                %d.-",size3,pri3);
	printf("\n\n\t\t\t    ");
	printf("\n\n\t\t\t    ");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");	
	printf("\n\t\tENTER THE NUMBER TO CHOOSE THE SHOES/  PRESS 0 TO RETURN : ");
		switch(getch()){
			case'0':nike();
				break;
		case'1': add1();
			break;
			default:nike();
				break;
		}	
	}
		else if(brand==3){
	printf("\n\n\n\t\t\t\t   ONLINE SHOES STORE SYSTEM");
	printf("\n\t\t===================================================================");
	printf("\n\t\t###\t\t\tFULFILSHOESSHOPZ.         \t\t###");
	printf("\n\n\n\t\t    ");
	printf("\n\n\n\t\t\t\t            -NO HAVE- ");
	printf("\n\n\n\t\t   ");
	printf("\n\n\n\t\t   ");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS 0 TO RETURN :  ");		
		switch(getch()){
			case'0':nike();
				break;
			default:nike();
				break;
		}	
	}
		else if(brand==4){
	float size4=27.5;
	int pri4=2190;
	printf("\n\n\n\t\t\t\t   ONLINE SHOES STORE SYSTEM");
	printf("\n\t\t===================================================================");
	printf("\n\t\t###\t\t\tFULFILSHOESSHOPZ.         \t\t###");
	printf("\n\n\n\t\t    BRANDS:                      SIZE:               PRICE(BAHT):");
	printf("\n\n\n\t\t   1.  Van Old Skool black      %.1f cm.                %d.-",size4,pri4);
	printf("\n\n\t\t\t    ");
	printf("\n\n\t\t\t    ");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");	
		switch(getch()){
			case'0':nike(); 
				break;
		    case'1':van();
				break;
			default:nike();
				break;
		}	
	}
		else if(brand==5){
	printf("\n\n\n\t\t\t\t   ONLINE SHOES STORE SYSTEM");
	printf("\n\t\t===================================================================");
	printf("\n\t\t###\t\t\tFULFILSHOESSHOPZ.         \t\t###");
	printf("\n\n\n\t\t    BRANDS:                      SIZE:               PRICE(BAHT):");
	printf("\n\n\n\t\t   1.  Puma Ignite Limitless    27.5 cm.               2,090.-");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");	
		switch(getch()){
			case'0':nike();
				break;
			case'1':puma();
				break;
			default:nike();
				break;
		}	
	}	
		else if(brand==6){
	printf("\n\n\n\t\t\t\t   ONLINE SHOES STORE SYSTEM");
	printf("\n\t\t===================================================================");
	printf("\n\t\t###\t\t\tFULFILSHOESSHOPZ.         \t\t###");
	printf("\n\n\n\t\t    ");
	printf("\n\n\n\t\t\t\t            -NO HAVE- ");
	printf("\n\n\n\t\t   ");
	printf("\n\n\n\t\t   ");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS 0 TO RETURN :  ");	
		switch(getch()){
			case'0':nike();
				break;
			default:nike();
				break;
		}		
	}
		else{
			nike();
		}
}

void nike1(){
		system("cls");
	char firstname1[15], lastname1[15], email1[15], address1[15];
	int phonenumber1;
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t      BOOKING             \t\t###");
	printf("\n\n\n\t\tCONTECT INFORMATION :");
	printf("\n\n\t\t\tFIRST NAME                 : ");
		scanf("%s", &firstname1);
	printf("\t\t\tLAST NAME                  : ");
		scanf("%s", &lastname1);
	printf("\t\t\tMOBILE PHONE NUMBER        : ");
		scanf("%d", &phonenumber1);
	printf("\t\t\tEMAIL                      : ");
		scanf("%s", &email1);		
	printf("\n\t\t\tADDRESS    : ");
		scanf("%s", &address1);		
	printf("\n\n\t\t###\t\t\t\t\t\t\t\t###");		
printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS ENTER TO CONTINUE  :  ");
		system("cls");

	int pric1=2590;
	int siz1=27;
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t      DETAILS               \t\t###");
	printf("\n\n\n\t\tSHOE\t      : Nike Airmax 270");
	printf("\n\t\tSIZE          : %d CM",siz1);
	printf("\n\n\n\t\t      FIRST NAME          : %s ",firstname1);
	printf("\n\t\t      LAST NAME           : %s ",lastname1);
	printf("\n\t\t      EMAIL               : %s ",email1);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d ",phonenumber1);
	printf("\n\t\t      ADDRESS             : %s ",address1);		
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d  BAHT",pric1);
	printf("\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");
		switch(getch()){
		
			case'1':reeb();
				break;
		} 


}
void nike2(){
		system("cls");
	char firstname2[15], lastname2[15], email2[15], address2[15];
	int phonenumber2;
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t      BOOKING             \t\t###");
	printf("\n\n\n\t\tCONTECT INFORMATION :");
	printf("\n\n\t\t\tFIRST NAME                 : ");
		scanf("%s", &firstname2);
	printf("\t\t\tLAST NAME                  : ");
		scanf("%s", &lastname2);
	printf("\t\t\tMOBILE PHONE NUMBER        : ");
		scanf("%d", &phonenumber2);
	printf("\t\t\tEMAIL                      : ");
		scanf("%s", &email2);		
	printf("\n\t\t\tADDRESS    : ");
		scanf("%s", &address2);		
	printf("\n\n\t\t###\t\t\t\t\t\t\t\t###");		
printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS ENTER TO CONTINUE  :  ");
		system("cls");

	int pric2=1990;
	float siz2=25.5;
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t      DETAILS               \t\t###");
	printf("\n\n\n\t\tSHOE\t      : Nike Free x  Metcon");
	printf("\n\t\tSIZE          : %.1f CM",siz2);
	printf("\n\n\n\t\t      FIRST NAME          : %s ",firstname2);
	printf("\n\t\t      LAST NAME           : %s ",lastname2);
	printf("\n\t\t      EMAIL               : %s ",email2);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d ",phonenumber2);
	printf("\n\t\t      ADDRESS             : %s ",address2);		
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d  BAHT",pric2);
	printf("\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");
		switch(getch()){
		
			case'1':reeb();
				break;
		} 


}
void nike3(){
		system("cls");
	char firstname[15], lastname[15], email[15], address[15];
	int phonenumber;
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t      BOOKING             \t\t###");
	printf("\n\n\n\t\tCONTECT INFORMATION :");
	printf("\n\n\t\t\tFIRST NAME                 : ");
		scanf("%s", &firstname);
	printf("\t\t\tLAST NAME                  : ");
		scanf("%s", &lastname);
	printf("\t\t\tMOBILE PHONE NUMBER        : ");
		scanf("%d", &phonenumber);
	printf("\t\t\tEMAIL                      : ");
		scanf("%s", &email);		
	printf("\n\t\t\tADDRESS    : ");
		scanf("%s", &address);		
	printf("\n\n\t\t###\t\t\t\t\t\t\t\t###");		
printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS ENTER TO CONTINUE  :  ");
		system("cls");

	int pric=2290;
	float siz=24.5;
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t      DETAILS               \t\t###");
	printf("\n\n\n\t\tSHOE\t      : Nike Rose Run");
	printf("\n\t\tSIZE          : %.1f CM",siz);
	printf("\n\n\n\t\t      FIRST NAME          : %s ",firstname);
	printf("\n\t\t      LAST NAME           : %s ",lastname);
	printf("\n\t\t      EMAIL               : %s ",email);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d ",phonenumber);
	printf("\n\t\t      ADDRESS             : %s ",address);		
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d  BAHT",pric);
	printf("\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");
		switch(getch()){
		
			case'1':reeb();
				break;
		} 


}

void add1(){
			system("cls");
	char firstname[15], lastname[15], email[15], address[15];
	int phonenumber;
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t      BOOKING             \t\t###");
	printf("\n\n\n\t\tCONTECT INFORMATION :");
	printf("\n\n\t\t\tFIRST NAME                 : ");
		scanf("%s", &firstname);
	printf("\t\t\tLAST NAME                  : ");
		scanf("%s", &lastname);
	printf("\t\t\tMOBILE PHONE NUMBER        : ");
		scanf("%d", &phonenumber);
	printf("\t\t\tEMAIL                      : ");
		scanf("%s", &email);		
	printf("\n\t\t\tADDRESS    : ");
		scanf("%s", &address);		
	printf("\n\n\t\t###\t\t\t\t\t\t\t\t###");		
printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS ENTER TO CONTINUE  :  ");
		system("cls");

	int pric=5790;
	int siz=26;
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t      DETAILS               \t\t###");
	printf("\n\n\n\t\tSHOE\t      : Adidas NMD r1 black");
	printf("\n\t\tSIZE          : %d CM",siz);
	printf("\n\n\n\t\t      FIRST NAME          : %s ",firstname);
	printf("\n\t\t      LAST NAME           : %s ",lastname);
	printf("\n\t\t      EMAIL               : %s ",email);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d ",phonenumber);
	printf("\n\t\t      ADDRESS             : %s ",address);		
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d  BAHT",pric);
	printf("\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");
		switch(getch()){
		
			case'1':reeb();
				break;
		} 


}
void van(){
			system("cls");
	char firstname[15], lastname[15], email[15], address[15];
	int phonenumber;
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t      BOOKING             \t\t###");
	printf("\n\n\n\t\tCONTECT INFORMATION :");
	printf("\n\n\t\t\tFIRST NAME                 : ");
		scanf("%s", &firstname);
	printf("\t\t\tLAST NAME                  : ");
		scanf("%s", &lastname);
	printf("\t\t\tMOBILE PHONE NUMBER        : ");
		scanf("%d", &phonenumber);
	printf("\t\t\tEMAIL                      : ");
		scanf("%s", &email);		
	printf("\n\t\t\tADDRESS    : ");
		scanf("%s", &address);		
	printf("\n\n\t\t###\t\t\t\t\t\t\t\t###");		
printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS ENTER TO CONTINUE  :  ");
		system("cls");

	int pric=2190;
	float siz=27.5;
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t      DETAILS               \t\t###");
	printf("\n\n\n\t\tSHOE\t      : Van Old Skool black");
	printf("\n\t\tSIZE          : %.1f CM",siz);
	printf("\n\n\n\t\t      FIRST NAME          : %s ",firstname);
	printf("\n\t\t      LAST NAME           : %s ",lastname);
	printf("\n\t\t      EMAIL               : %s ",email);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d ",phonenumber);
	printf("\n\t\t      ADDRESS             : %s ",address);		
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d  BAHT",pric);
	printf("\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");
		switch(getch()){
		
			case'1':reeb();
				break;
		} 


}
void puma(){
				system("cls");
	char firstname[15], lastname[15], email[15], address[15];
	int phonenumber;
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t      BOOKING             \t\t###");
	printf("\n\n\n\t\tCONTECT INFORMATION :");
	printf("\n\n\t\t\tFIRST NAME                 : ");
		scanf("%s", &firstname);
	printf("\t\t\tLAST NAME                  : ");
		scanf("%s", &lastname);
	printf("\t\t\tMOBILE PHONE NUMBER        : ");
		scanf("%d", &phonenumber);
	printf("\t\t\tEMAIL                      : ");
		scanf("%s", &email);		
	printf("\n\t\t\tADDRESS    : ");
		scanf("%s", &address);		
	printf("\n\n\t\t###\t\t\t\t\t\t\t\t###");		
printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS ENTER TO CONTINUE  :  ");
		system("cls");

	int pric=2090;
	float siz=27.5;
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t      DETAILS               \t\t###");
	printf("\n\n\n\t\tSHOE\t      :	Puma Ignite Limitless");
	printf("\n\t\tSIZE          : %.1f CM",siz);
	printf("\n\n\n\t\t      FIRST NAME          : %s ",firstname);
	printf("\n\t\t      LAST NAME           : %s ",lastname);
	printf("\n\t\t      EMAIL               : %s ",email);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d ",phonenumber);
	printf("\n\t\t      ADDRESS             : %s ",address);		
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d  BAHT",pric);
	printf("\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");
		switch(getch()){
		
			case'1':reeb();
				break;
		} 

}
void reeb(){

		system("cls");
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t   CONFIRMATION         \t\t###");
	printf("\n\n\n\n\t\t\t   ARE YOU SURE TO CONFIRM YOUR SHOES BOOKING?");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t===================================================================");	
	printf("\n\t\t\t           PRESS 0  NO  |  PRESS 1 YES : ");
		switch(getch()){
			case'0':menu();
				break;
			case'1':asic();
				break;
			default:reeb();
				break;
		}
}

void asic(){
		system("cls");
	printf("\n\n\n\t\t\t\t  ONLINE SHOES STORE SYSTEM"); 
	printf("\n\t\t===================================================================");	
	printf("\n\t\t###\t\t\t     COMPLETED              \t\t###");
	printf("\n\n\n\n\t\t\t\t   YOUR SHOES HAS BEEN BOOKED!"); 

	printf("\n\n\n\n\t\t###       THANK YOU FOR USING ONLINE SHOES STORE SYSTEM       ###");	
	printf("\n\t\t===================================================================");	
	printf("\n\t\tPRESS 1 TO MAIN MENU : ");
		switch(getch()){
			case'1':menu();
				break;
			default:asic();
				break;
		}
}

