#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

	int menu();
	void air1();
    void air2();
    void air3();
    void air4();
    void air5();
    void air6();
    void air7();
    
int main(){
	menu();
    return 0;
}
		
	int menu(){	

		system("cls");
	printf("\n\n\n\t\t\t       WELCOME TO AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\t  FLIGHT DESTINATION         \t\t###");
	printf("\n\n\n\n\t\t\t    DEPARTURE     :.............................");
	printf("\n\n\t\t\t    DESTINATION   :.............................");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");
	printf("\n\t\t###################################################################");
	printf("\n\t\tPRESS 1 TO SEE CITIES/AIRPORTS : ");
		switch(getch()){
			case'1':air1();
				break;
			default:menu();
				break;
		}
}
	
void air1(){
		system("cls");
	int flight;
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\t CITIES/AIRPORTS         \t\t###");
	printf("\n\n\n\t\tCHOOSE DEPARTURE AND DESTINATION FLIGHT :");
	printf("\n\n\t\t\t   1.  HAT YAI [HDY]\t  -->\t BANGKOK [BKK]");
	printf("\n\n\t\t\t   2.  BANGKOK [BKK]\t  -->\t HAT YAI [HDY]");	
	printf("\n\n\t\t\t   3.  HAT YAI [HDY]\t  -->\t CHIANG MAI [CNX]");
	printf("\n\n\t\t\t   4.  CHIANG MAI [CNX]\t  -->\t HAT YAI [HDY]");	
	printf("\n\n\t\t\t   5.  BANGKOK [BKK]\t  -->\t CHIANG MAI [CNX]");
	printf("\n\n\t\t\t   6.  CHIANG MAI [CNX]\t  -->\t BANGKOK [BKK]");	
	printf("\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t###################################################################");
	printf("\n\t\tENTER THE NUMBER TO CHOOSE DEPARTURE AND DESTINATION FLIGHT : ");
		scanf("%d",&flight);
		
		system("cls");	
		if(flight==1){
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\tFLIGHT DESTINATION         \t\t###");
	printf("\n\n\n\n\t\t\t\t   DEPARTURE     :\tHAT YAI [HDY]");
	printf("\n\n\n\t\t\t\t   DESTINATION   :\tBANGKOK [BKK]");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t###################################################################");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");	
		switch(getch()){
			case'0':air1();
				break;
			case'1':air2();
				break;
			default:air1();
				break;
		}	
	}
		else if(flight==2){
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\tFLIGHT DESTINATION         \t\t###");
	printf("\n\n\n\n\t\t\t\t   DEPARTURE     :\tBANGKOK [BKK]");
	printf("\n\n\n\t\t\t\t   DESTINATION   :\tHAT YAI [HDY]");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t###################################################################");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");	
		switch(getch()){
			case'0':air1();
				break;
			case'1':air2();
				break;
			default:air1();
				break;
		}	
	}
		else if(flight==3){
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\tFLIGHT DESTINATION         \t\t###");
	printf("\n\n\n\n\t\t\t\t   DEPARTURE     :\tHAT YAI [HDY]");
	printf("\n\n\n\t\t\t\t   DESTINATION   :\tCHIANG MAI [CNX]");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t###################################################################");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");
		switch(getch()){
			case'0':air1();
				break;
			case'1':air2();
				break;
			default:air1();
				break;
		}	
	}
		else if(flight==4){
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\tFLIGHT DESTINATION         \t\t###");
	printf("\n\n\n\n\t\t\t\t   DEPARTURE     :\tCHIANG MAI [CNX]");
	printf("\n\n\n\t\t\t\t   DESTINATION   :\tHAT YAI [HDY]");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t###################################################################");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");	
		switch(getch()){
			case'0':air1();
				break;
			case'1':air2();
				break;
			default:air1();
				break;
		}	
	}
		else if(flight==5){
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\tFLIGHT DESTINATION         \t\t###");
	printf("\n\n\n\n\t\t\t\t   DEPARTURE     :\tBANGKOK [BKK]");
	printf("\n\n\n\t\t\t\t   DESTINATION   :\tCHIANG MAI [CNX]");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t###################################################################");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");	
		switch(getch()){
			case'0':air1();
				break;
			case'1':air2();
				break;
			default:air1();
				break;
		}	
	}	
		else if(flight==6){
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\tFLIGHT DESTINATION         \t\t###");
	printf("\n\n\n\n\t\t\t\t   DEPARTURE     :\tCHIANG MAI [BKK]");
	printf("\n\n\n\t\t\t\t   DESTINATION   :\tBANGKOK [CNX]");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t###################################################################");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");	
		switch(getch()){
			case'0':air1();
				break;
			case'1':air2();
				break;
			default:air1();
				break;
		}		
	}
		else{
			air1();
		}
}


void air2(){
		system("cls");
	int airplane,
		next2,
		airasia=650,
		nokair=890,
		thailionair=725,
		thaismile=1090,
		bangkokairways=1590,
		thaiairways=1290,
		timehr1=7,
		timemin1=30,
		timehr2=9,
		timemin2=45,
		timehr3=11,
		timemin3=15,
		timehr4=1,
		timemin4=30,
		timehr5=4,
		timemin5=45,
		timehr6=7,
		timemin6=30;
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\t   SEARCH FLIGHTS         \t\t###");
	printf("\n\n\n\t\t    FLIGHT:                      TIME:               PRICE(BAHT):");
	printf("\n\n\n\t\t1. AIR ASIA\t\t\t%d:%d  AM.\t\t%d.-", timehr1, timemin1, airasia);
	printf("\n\n\t\t2. NOK AIR\t\t\t%d:%d  AM.\t\t%d.-", timehr2, timemin2, nokair);
	printf("\n\n\t\t3. THAI LION AIR\t\t%d:%d AM.\t\t%d.-", timehr3, timemin3, thailionair);
	printf("\n\n\t\t4. THAI SMILE\t\t\t%d:%d  PM.\t\t%d.-", timehr4, timemin4, thaismile);
	printf("\n\n\t\t5. BANGKOK AIRWAYS\t\t%d:%d  PM.\t\t%d.-", timehr5, timemin5, bangkokairways);
	printf("\n\n\t\t6. THAI AIRWAYS\t\t\t%d:%d  PM.\t\t%d.-", timehr6, timemin6, thaiairways);
	printf("\n\n\n\t\t###\t\t\t\t\t\t\t\t###");	
	printf("\n\t\t###################################################################");
	printf("\n\t\tENTER THE NUMBER TO CHOOSE THE FLIGHT : ");
		scanf("%d", &airplane);
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");	
	
		if(airplane==1){
			scanf("$d",&next2);	
		}
		else if(airplane==2){	
			scanf("$d",&next2);
		}
		else if(airplane==3){
			scanf("$d",&next2);	
		}
		else if(airplane==4){	
			scanf("$d",&next2);
		}	
		else if(airplane==5){
			scanf("$d",&next2);	
		}
		else if(airplane==6){	
			scanf("$d",&next2);
		}
		else{
			air2();	
		}	
		switch(getch()){
			case'0':air1();
				break;
			case'1':air3();
				break;
			default:air2();
				break;
		}		
}
	

void air3(){		
		system("cls");
	int passenger; 
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\t NO. OF PASSENGERS         \t\t###");
	printf("\n\n\n\n\t\t\t\t        PASSENGER(S)  :  ");
		scanf("%d", &passenger);
	printf("\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t###################################################################");	
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");
		switch(getch()){
			case'0':air2();
				break;
			case'1':air4();
				break;
			default:air3();
				break;
		}
}


void air4(){
		system("cls");
	char firstname[15], lastname[15], national[15], email[15], contect[15];
	int  birthdate, phonenumber, flydate;
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\t      BOOKING             \t\t###");
	printf("\n\n\n\t\tCONTECT INFORMATION :");
	printf("\n\n\t\t\tFIRST NAME                 : ");
		scanf("%s", &firstname);
	printf("\t\t\tLAST NAME                  : ");
		scanf("%s", &lastname);
	printf("\t\t\tDATE OF BIRTH(DDMMYYYY)    : ");
		scanf("%d", &birthdate);
	printf("\t\t\tNATIONAL                   : ");
		scanf("%s", &national);	
	printf("\t\t\tMOBILE PHONE NUMBER        : ");
		scanf("%d", &phonenumber);
	printf("\t\t\tEMAIL                      : ");
		scanf("%s", &email);		
	printf("\n\t\t\tDATE TO FLY(DDMMYYYY)      : ");
		scanf("%d", &flydate);		
	printf("\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t###################################################################");
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");
		switch(getch()){
			case'0':air3();
				break;
			case'1':air5();
				break;
			default:air4();
				break;
		}
}

void air5(){
		system("cls");
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\t      DETAILS               \t\t###");
	printf("\n\n\n\t\tFLIGHT        : HAT YAI [HDY] --> BANGKOK [BKK]");
	printf("\n\t\tTIME          : 7:30 PM.");
	printf("\n\t\tDATE TO FLY   : 31/05/2017");
	printf("\n\n\n\t\t      FIRST NAME    : ABDULLOH");
	printf("\t\tLAST NAME  : LABU-API");
	printf("\n\t\t      DATE OF BIRTH : 12/03/1993");
	printf("\tNATIONAL   : THAI");
	printf("\n\t\t      EMAIL         : ABDULLOH.LABUAPI@GMAIL.COM");
	printf("\n\t\t      MOBILE PHONE NUMBER : 0611739427");		
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : 1290 BAHT");
	printf("\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t###################################################################");
	printf("\n\t\t\t     PRESS 0 TO RETURN  |  PRESS 1 TO CONTINUE  :  ");
		switch(getch()){
			case'0':air4();
				break;
			case'1':air6();
				break;
			default:air5();
				break;
		}
	
}

void air6(){
		system("cls");
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\t   CONFIRMATION         \t\t###");
	printf("\n\n\n\n\t\t\t   ARE YOU SURE TO CONFIRM YOUR FLIGHT BOOKING?");
	printf("\n\n\n\n\t\t###\t\t\t\t\t\t\t\t###");		
	printf("\n\t\t###################################################################");
	printf("\n\t\t\t           PRESS 0  NO  |  PRESS 1 YES : ");
		switch(getch()){
			case'0':air5();
				break;
			case'1':air7();
				break;
			default:air6();
				break;
		}
}

void air7(){
		system("cls");
	printf("\n\n\n\t\t\t\t   AIRLINES RESERVATION SYSTEM");
	printf("\n\t\t###################################################################");
	printf("\n\t\t###\t\t\t     COMPLETED              \t\t###");
	printf("\n\n\n\n\t\t\t\t   YOUR FLIGHT HAS BEEN RESERVED!");
	printf("\n\n\n\n\t\t###       THANK YOU FOR USING AIRLINES RESERVATION SYSTEM       ###");	
	printf("\n\t\t###################################################################");
	printf("\n\t\tPRESS 1 TO MAIN MENU : ");
		switch(getch()){
			case'1':menu();
				break;
			default:air7();
				break;
		}
}
