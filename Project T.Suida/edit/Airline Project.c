#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define MAX 20
	int menu();
	int t(void);
	void list();
	void air1();
	void air2();
	void air3();
	void air4();
    void confirm();
	void been();

int main(){
	menu();
    return 0;
}
int menu(){
	system("cls");
	system("COLOR 0F");
	printf("\n\n\t\t-----------------------------------------------------------------------\n");
	printf("\t\t ===   \t\tWELCOME TO AIRLINES RESERVATION SYSTEM\t\t   ===");
	printf("\n\t\t-------------------------------******----------------------------------");
	printf("\n\n\t\t\t\t\t  FLIGHT DESTINATION");
	printf("\n\n\n\t\t\t\t1.DEPARTURE     ");
	printf("\n\n\t\t\t\t2.DESTINATION     \n");
	printf("\n\t\t === \t\t                                      \t\t   ===");
	t();
	printf("\t\t-----------------------------------------------------------------------");
	printf("\n\t\t                                                \tCREDIT : HARISYUNUH");
	printf("\n\t\tPRESS 1 TO SEE MENU  : ");
		switch(getch()){
			case'1':list();
				break;
			default:menu();
				break;
		}
		return 0;
} 
void list(){
	system("cls");
		int flight;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
	printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
	printf("\n\t\t\t\t\tCITIES/AIRPORTS         \t\t");
	printf("\n\n\t\tChoose Departure and Destination Flight :");
	printf("\n\n\t\t\t   1.  Narathiwat (NAW)\t  -->\t Suwannaphum (BKK)");
	printf("\n\n\t\t\t   2.  Hat Yai (HDY)\t  -->\t Don Muang (DMK)");
	printf("\n\n\t\t\t   3.  Narathiwat (NAW)\t  -->\t Phuket (HKT)");		
	printf("\n\n\t\t\t   4.  Don Muang(DMK)\t  -->\t Hat Yai (HDY)");	
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
	printf("\t\t-----------------------------------------------------------------");
	printf("\n\t\tENTER THE NUMBER TO CHOOSE DEPARTURE AND DESTINATION FLIGHT : ");
	scanf("%d",&flight);
	system("cls");
    if (flight==1){
    		printf("\n\n\t\t-----------------------------------------------------------------\n");
	        printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
	        printf("\n\t\t\t\t\tFLIGHT DESTINATION");
	        printf("\n\n\n\n\t\t\t\t   DEPARTURE     :\tNarathiwat (NAW)");
	        printf("\n\n\n\t\t\t\t   DESTINATION   :\tSuwannaphum (BKK)");
	       	printf("\n\n\t\t === \t\t                             \t\t     ===");	
        	printf("\n\t\t-----------------------------------------------------------------");
       	    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
        			switch(getch()){
	        		case'y':air1();
			        	break;
		        	default:list();
				        break;
	     	}	
	}
	else if (flight==2){
		   	printf("\n\n\t\t-----------------------------------------------------------------\n");
	        printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
	        printf("\n\t\t\t\t\tFLIGHT DESTINATION");
	        printf("\n\n\n\n\t\t\t\t   DEPARTURE     :\tHat Yai (HDY)");
	        printf("\n\n\n\t\t\t\t   DESTINATION   :\tDon Muang(DMK)");
	       	printf("\n\n\t\t === \t\t                             \t\t     ===");	
        	printf("\n\t\t-----------------------------------------------------------------");
       	    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
        			switch(getch()){
	        		case'y':air2();
			        	break;
		        	default:list();
				        break;
	     	}	
   }
	else if (flight==3){
			printf("\n\n\t\t-----------------------------------------------------------------\n");
	        printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
	        printf("\n\t\t\t\t\tFLIGHT DESTINATION");
	        printf("\n\n\n\n\t\t\t\t   DEPARTURE     :\tNarathiwat (NAW)");
	        printf("\n\n\n\t\t\t\t   DESTINATION   :\tPhuket (HKT)");
	       	printf("\n\n\t\t === \t\t                             \t\t     ===");	
        	printf("\n\t\t-----------------------------------------------------------------");
       	    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
        			switch(getch()){
	        		case'y':air3();
			        	break;
		        	default:list();
				        break;
	     	}		
	}
	else if (flight==4){
			printf("\n\n\t\t-----------------------------------------------------------------\n");
	        printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
	        printf("\n\t\t\t\t\tFLIGHT DESTINATION");
	        printf("\n\n\n\n\t\t\t\t   DEPARTURE     :\tDon Muang(DMK)");
	        printf("\n\n\n\t\t\t\t   DESTINATION   :\tHat Yai (HDY)");
	       	printf("\n\n\t\t === \t\t                             \t\t     ===");	
        	printf("\n\t\t-----------------------------------------------------------------");
       	    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
        			switch(getch()){
	        		case'y':air4();
			        	break;
		        	default:list();
				        break;
	     	}		
	}
	else {
		list();
	}
}
void air1(){
	system("cls");
	int num1,
		airasia=990,
		nokair=1190,
		thailionair=1260,
		hr1=7,
		min1=30,
		hr2=9,
		min2=45,
		hr3=11,
		min3=15;	
   	system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t1. AIR ASIA\t\t\t%d:%d  AM.\t\t%d.-", hr1, min1, airasia);
	printf("\n\n\t\t2. NOK AIR\t\t\t%d:%d  AM.\t\t%d.-", hr2, min2, nokair);
	printf("\n\n\t\t3. THAI LION AIR\t\t%d:%d AM.\t\t%d.-", hr3, min3, thailionair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
   	printf("\n\t\tENTER THE NUMBER FLIGHT : ");
   	scanf("%d",&num1);
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
	     	
	if (num1==1)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
    printf("\n\t\tNarathiwat (NAW)\t  -->\t Suwannaphum (BKK)");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t AIR ASIA\t\t\t%d:%d  AM.\t\t%d.-", hr1, min1, airasia);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname[MAX], lastname[MAX], national[MAX], email[MAX], contect[MAX], birthdate[MAX],flydate[MAX];
	int  phonenumber;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber);	
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate);	
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email);		
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Narathiwat (NAW)\t  -->\t Suwannaphum (BKK)");
	printf("\n\t\tTIME          : %d:%d PM.",hr1, min1);
	printf("\n\t\tDATE TO FLY   : %s",flydate);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname);
	printf("\t\tLAST NAME  : %s",lastname);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate);
	printf("\t\tNATIONAL   : %s",national);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email);	
	printf("\n\n\t\t\tAIR ASIA");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",airasia);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
	}
}
	else if (num1==2)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t NOK AIR\t\t\t%d:%d  AM.\t\t%d.-", hr2, min2, nokair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname2[MAX], lastname2[MAX], national2[MAX], email2[MAX], contect2[MAX], birthdate2[MAX],flydate2[MAX];
	int  phonenumber2;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname2);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname2);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate2);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national2);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber2);
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate2);	
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email2);			
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Narathiwat (NAW)\t  -->\t Suwannaphum (BKK)");
	printf("\n\t\tTIME          : %d:%d PM.",hr2, min2);
	printf("\n\t\tDATE TO FLY   : %s",flydate2);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname2);
	printf("\t\tLAST NAME  : %s",lastname2);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate2);
	printf("\t\tNATIONAL   : %s",national2);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber2);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email2);
	printf("\n\n\t\t\tNOK AIR");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",nokair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
	}
}
	else if (num1==3)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t THAI LION AIR\t\t%d:%d AM.\t\t%d.-", hr3, min3, thailionair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname3[MAX], lastname3[MAX], national3[MAX], email3[MAX], contect3[MAX], birthdate3[MAX],flydate3[MAX];
	int  phonenumber3;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname3);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname3);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate3);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national3);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber3);
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate3);	
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email3);			
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Narathiwat (NAW)\t  -->\t Suwannaphum (BKK)");
	printf("\n\t\tTIME          : %d:%d PM.",hr3, min3);
	printf("\n\t\tDATE TO FLY   : %s",flydate3);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname3);
	printf("\t\tLAST NAME  : %s",lastname3);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate3);
	printf("\t\tNATIONAL   : %s",national3);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber3);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email3);	
	printf("\n\n\t\t\tTHAI LION AIR");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",thailionair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
     printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
	}
}
}
void air2(){
        system("cls");
   		int num2,
		airasia=750,
		nokair=990,
		thailionair=1225,
		bangkokairways=1590,
		thaiairways=1690,
		hr1=7,
		min1=30,
		hr2=9,
		min2=45,
		hr3=11,
		min3=15,
		hr4=1,
		min4=30,
		hr5=4,
		min5=45,
		hr6=7,
		min6=30;	
   	system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t1. AIR ASIA\t\t\t%d:%d  AM.\t\t%d.-", hr1, min1, airasia);
	printf("\n\n\t\t2. NOK AIR\t\t\t%d:%d  AM.\t\t%d.-", hr2, min2, nokair);
	printf("\n\n\t\t3. THAI LION AIR\t\t%d:%d AM.\t\t%d.-", hr3, min3, thailionair);
	printf("\n\n\t\t4. BANGKOK AIRWAYS\t\t%d:%d  PM.\t\t%d.-", hr5, min5, bangkokairways);
	printf("\n\n\t\t5. THAI AIRWAYS\t\t\t%d:%d  PM.\t\t%d.-", hr6, min6, thaiairways);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
   	printf("\n\t\tENTER THE NUMBER FLIGHT : ");
   	scanf("%d",&num2);
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
	     	
	if (num2==1)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
    printf("\n\t\tHat Yai (HDY)\t  -->\t Don Muang(DMK)");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t AIR ASIA\t\t\t%d:%d  AM.\t\t%d.-", hr1, min1, airasia);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname[MAX], lastname[MAX], national[MAX], email[MAX], contect[MAX], birthdate[MAX],flydate[MAX];
	int  phonenumber;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber);	
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate);	
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email);		
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Hat Yai (HDY)\t  -->\t Don Muang(DMK)");
	printf("\n\t\tTIME          : %d:%d PM.",hr1, min1);
	printf("\n\t\tDATE TO FLY   : %s",flydate);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname);
	printf("\t\tLAST NAME  : %s",lastname);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate);
	printf("\t\tNATIONAL   : %s",national);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email);	
	printf("\n\n\t\t\t AIR ASIA");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",airasia);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
	}
}
	else if (num2==2)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t NOK AIR\t\t\t%d:%d  AM.\t\t%d.-", hr2, min2, nokair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname2[MAX], lastname2[MAX], national2[MAX], email2[MAX], contect2[MAX], birthdate2[MAX],flydate2[MAX];
	int  phonenumber2;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname2);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname2);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate2);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national2);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber2);	
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate2);
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email2);			
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Hat Yai (HDY)\t  -->\t Don Muang(DMK)");
	printf("\n\t\tTIME          : %d:%d PM.",hr2, min2);
	printf("\n\t\tDATE TO FLY   : %s",flydate2);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname2);
	printf("\t\tLAST NAME  : %s",lastname2);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate2);
	printf("\t\tNATIONAL   : %s",national2);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber2);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email2);
	printf("\n\n\t\t\tNOK AIR");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",nokair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
	}
}
	else if (num2==3)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t THAI LION AIR\t\t%d:%d AM.\t\t%d.-", hr3, min3, thailionair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname3[MAX], lastname3[MAX], national3[MAX], email3[MAX], contect3[MAX], birthdate3[MAX],flydate3[MAX];
	int  phonenumber3;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname3);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname3);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate3);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national3);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber3);
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate3);		
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email3);		
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Hat Yai (HDY)\t  -->\t Don Muang(DMK)");
	printf("\n\t\tTIME          : %d:%d PM.",hr3, min3);
	printf("\n\t\tDATE TO FLY   : %s",flydate3);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname3);
	printf("\t\tLAST NAME  : %s",lastname3);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate3);
	printf("\t\tNATIONAL   : %s",national3);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber3);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email3);
	printf("\n\n\t\t\tTHAI LION AIR");	
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",thailionair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
	}
}
	else if (num2==4)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t BANGKOK AIRWAYS\t\t\t%d:%d  AM.\t\t%d.-", hr4, min4, bangkokairways);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname4[MAX], lastname4[MAX], national4[MAX], email4[MAX], contect4[MAX], birthdate4[MAX],flydate4[MAX];
	int  phonenumber4;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname4);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname4);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate4);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national4);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber4);
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate4);	
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email4);			
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Hat Yai (HDY)\t  -->\t Don Muang(DMK)");
	printf("\n\t\tTIME          : %d:%d PM.",hr4, min4);
	printf("\n\t\tDATE TO FLY   : %s",flydate4);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname4);
	printf("\t\tLAST NAME  : %s",lastname4);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate4);
	printf("\t\tNATIONAL   : %s",national4);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber4);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email4);	
	printf("\n\n\t\t\tBANGKOK AIRWAYS");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",bangkokairways);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
	}
}
	else if (num2==5)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t THAI AIRWAYS\t\t%d:%d AM.\t\t%d.-", hr5, min5, thaiairways);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname5[MAX], lastname5[MAX], national5[MAX], email5[MAX], contect5[MAX], birthdate5[MAX],flydate5[MAX];
	int  phonenumber5;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname5);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname5);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate5);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national5);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber5);	
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate5);	
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email5);		
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Hat Yai (HDY)\t  -->\t Don Muang(DMK)");
	printf("\n\t\tTIME          : %d:%d PM.",hr5, min5);
	printf("\n\t\tDATE TO FLY   : %s",flydate5);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname5);
	printf("\t\tLAST NAME  : %s",lastname5);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate5);
	printf("\t\tNATIONAL   : %s",national5);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber5);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email5);	
	printf("\nn\\t\t\tTHAI AIRWAYS");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",thaiairways);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
	}
  }
}
void air3(){
	    system("cls");
   		int num3,
		airasia=850,
		nokair=890,
		thailionair=960,
		hr1=7,
		min1=30,
		hr2=9,
		min2=45,
		hr3=11,
		min3=15;	
   	system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t1. AIR ASIA\t\t\t%d:%d  AM.\t\t%d.-", hr1, min1, airasia);
	printf("\n\n\t\t2. NOK AIR\t\t\t%d:%d  AM.\t\t%d.-", hr2, min2, nokair);
	printf("\n\n\t\t3. THAI LION AIR\t\t%d:%d AM.\t\t%d.-", hr3, min3, thailionair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
   	printf("\n\t\tENTER THE NUMBER FLIGHT : ");
   	scanf("%d",&num3);
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
	     	
	if (num3==1)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
    printf("\n\t\tNarathiwat (NAW)\t  -->\t Phuket (HKT)");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t AIR ASIA\t\t\t%d:%d  AM.\t\t%d.-", hr1, min1, airasia);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname[MAX], lastname[MAX], national[MAX], email[MAX], contect[MAX], birthdate[MAX],flydate[MAX];
	int  phonenumber;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber);	
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate);	
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email);		
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Narathiwat (NAW)\t  -->\t Phuket (HKT)");
	printf("\n\t\tTIME          : %d:%d PM.",hr1, min1);
	printf("\n\t\tDATE TO FLY   : %s",flydate);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname);
	printf("\t\tLAST NAME  : %s",lastname);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate);
	printf("\t\tNATIONAL   : %s",national);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email);	
	printf("\n\n\t\t\tAIR ASIA");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",airasia);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
}
}
	else if (num3==2)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t NOK AIR\t\t\t%d:%d  AM.\t\t%d.-", hr2, min2, nokair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname2[MAX], lastname2[MAX], national2[MAX], email2[MAX], contect2[MAX], birthdate2[MAX],flydate2[MAX];
	int  phonenumber2;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname2);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname2);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate2);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national2);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber2);	
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate2);	
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email2);		
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Narathiwat (NAW)\t  -->\t Phuket (HKT)");
	printf("\n\t\tTIME          : %d:%d PM.",hr2, min2);
	printf("\n\t\tDATE TO FLY   : %s",flydate2);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname2);
	printf("\t\tLAST NAME  : %s",lastname2);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate2);
	printf("\t\tNATIONAL   : %s",national2);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber2);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email2);	
	printf("\n\n\t\t\tNOK AIR");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",nokair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
}
}
	else if (num3==3)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t THAI LION AIR\t\t%d:%d AM.\t\t%d.-", hr3, min3, thailionair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname3[MAX], lastname3[MAX], national3[MAX], email3[MAX], contect3[MAX], birthdate3[MAX],flydate3[MAX];
	int  phonenumber3;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname3);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname3);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate3);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national3);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber3);	
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate3);	
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email3);		
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Narathiwat (NAW)\t  -->\t Phuket (HKT)");
	printf("\n\t\tTIME          : %d:%d PM.",hr3, min3);
	printf("\n\t\tDATE TO FLY   : %s",flydate3);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname3);
	printf("\t\tLAST NAME  : %s",lastname3);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate3);
	printf("\t\tNATIONAL   : %s",national3);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber3);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email3);	
	printf("\n\n\t\t\tTHAI LION AIR");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",thailionair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
    }
}
}
void air4(){
    	int num4,
		airasia=990,
		nokair=1190,
		thailionair=1260,
		hr1=7,
		min1=30,
		hr2=9,
		min2=45,
		hr3=11,
		min3=15;
   	system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t1. AIR ASIA\t\t\t%d:%d  AM.\t\t%d.-", hr1, min1, airasia);
	printf("\n\n\t\t2. NOK AIR\t\t\t%d:%d  AM.\t\t%d.-", hr2, min2, nokair);
	printf("\n\n\t\t3. THAI LION AIR\t\t%d:%d AM.\t\t%d.-", hr3, min3, thailionair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
   	printf("\n\t\tENTER THE NUMBER FLIGHT : ");
   	scanf("%d",&num4);
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
	     	
	if (num4==1)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
    printf("\n\t\tDon Muang(DMK)\t  -->\t Hat Yai (HDY)");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t AIR ASIA\t\t\t%d:%d  AM.\t\t%d.-", hr1, min1, airasia);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname[MAX], lastname[MAX], national[MAX], email[MAX], contect[MAX], birthdate[MAX],flydate[MAX];
	int  phonenumber;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber);	
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate);
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email);			
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Don Muang(DMK)\t  -->\t Hat Yai (HDY)");
	printf("\n\t\tTIME          : %d:%d PM.",hr1, min1);
	printf("\n\t\tDATE TO FLY   : %s",flydate);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname);
	printf("\t\tLAST NAME  : %s",lastname);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate);
	printf("\t\tNATIONAL   : %s",national);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email);	
	printf("\n\n\t\t\tAIR ASIA");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",airasia);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
	}
}
	else if (num4==2)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t NOK AIR\t\t\t%d:%d  AM.\t\t%d.-", hr2, min2, nokair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname2[MAX], lastname2[MAX], national2[MAX], email2[MAX], contect2[MAX], birthdate2[MAX],flydate2[MAX];
	int  phonenumber2;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname2);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname2);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate2);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national2);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber2);
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
	printf("\n\t\t\tEMAIL : ");
		scanf("%s", &email2);	
		scanf("%s", &flydate2);			
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Don Muang(DMK)\t  -->\t Hat Yai (HDY)");
	printf("\n\t\tTIME          : %d:%d PM.",hr2, min2);
	printf("\n\t\tDATE TO FLY   : %s",flydate2);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname2);
	printf("\t\tLAST NAME  : %s",lastname2);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate2);
	printf("\t\tNATIONAL   : %s",national2);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber2);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email2);
	printf("\n\n\t\t\tNOK AIR");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",nokair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
	}
}
	else if (num4==3)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t THAI LION AIR\t\t%d:%d AM.\t\t%d.-", hr3, min3, thailionair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
		system("cls");
	char firstname3[MAX], lastname3[MAX], national3[MAX], email3[MAX], contect3[MAX], birthdate3[MAX],flydate3[MAX];
	int  phonenumber3;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname3);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname3);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%s", &birthdate3);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national3);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber3);	
	printf("\n\t\t\tDATE TO FLY(DD/MM/YYYY) : ");
		scanf("%s", &flydate3);		
	printf("\n\t\t\tEMAIL : ");
	scanf("%s", &email3);	
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();	
		system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tDETAILS : ");
	printf("\n\n\t\tFLIGHT        : Don Muang(DMK)\t  -->\t Hat Yai (HDY)");
	printf("\n\t\tTIME          : %d:%d PM.",hr3, min3);
	printf("\n\t\tDATE TO FLY   : %s",flydate3);
	printf("\n\n\n\t\tFIRST NAME    : %s",firstname3);
	printf("\t\tLAST NAME  : %s",lastname3);
	printf("\n\t\tDATE OF BIRTH : %s",birthdate3);
	printf("\t\tNATIONAL   : %s",national3);
	printf("\n\t\t      MOBILE PHONE NUMBER : %d",phonenumber3);	
	printf("\n\t\t      EMAIL ADDRESS       : %s",email3);	
	printf("\n\n\t\t\tTHAI LION AIR");
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : %d BAHT",thailionair);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\tPRESS ENTER TO CONTINUE  !!  ");	
    switch (getch()){
        default : confirm();break;
	}
}
}
int t(void) //for time
{
time_t t;
time(&t);
printf("\n\t\tDate and time:%s",ctime(&t));

return 0 ;
}
void confirm(){
 system("cls");
	char y[10];
			printf("\n\n\t\t-----------------------------------------------------------------\n");
	        printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
	        printf("\n\t\t\t\t\tCONFIRMATION");
	        printf("\n\n\n\n\t\t\t   ARE YOU SURE TO CONFIRM YOUR FLIGHT INFORMATION ?");
	       	printf("\n\n\t\t === \t\t                             \t\t     ===");
        	printf("\n\t\t-----------------------------------------------------------------");
        	printf("\n\t\t\t    PRESS N TO CANCEL  |  PRESS Y TO CONFIRM  :  ");	
	        scanf("%c",&y[10]);	
	        switch(y[10]){
	        case'y':been();
		    	break;
	        case'n':list();
		    	break;
	        default : confirm();
	            break;
    }
}
void been(){
	system("cls");
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
	printf("\n\t\t\t\t\tCOMPLETED");
	printf("\n\n\n\n\t\t\t\t   YOUR FLIGHT HAS BEEN RESERVED!");
	printf("\n\n\t\t***       THANK YOU FOR USING AIRLINES RESERVATION SYSTEM       ***");	
	printf("\n\n\t\t === \t\t                             \t\t     ===");
   	printf("\n\t\t-----------------------------------------------------------------");
	printf("\n\t\tPRESS 1 TO MAIN MENU : ");
		switch(getch()){
			case'1':menu();
				break;
			default:been();
				break;
		}
   }
 

