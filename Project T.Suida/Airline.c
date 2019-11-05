#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#define MAX 20

	int menu();
	void list();
	void info();
    void airline1();
    void airline2();
    void airline3();
    void airline4();
    void airline5();
    void airline6();
    
int main(){
	menu();
    return 0;
}

int menu(){
	system("cls");
	system("COLOR 0F");
	printf("\n\n\t\t-----------------------------------------------------------------------\n");
	printf("\t\t ===   \t\tWELCOME TO AIRLINES RESERVATION SYSTEM\t\t   ===\n");
	printf("\n\t\t\t\t\t  FLIGHT DESTINATION");
	printf("\n\n\n\t\t\t\t1.DEPARTURE     ");
	printf("\n\n\t\t\t\t2.DESTINATION     \n");
	printf("\n\t\t === \t\t                                      \t\t   ===\n");
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
	printf("\n\n\t\t\t   2.  Hat Yai (HDY)\t  -->\t Don Muang(DMK)");
	printf("\n\n\t\t\t   3.  Narathiwat (NAW)\t  -->\t Phuket (HKT)");		
	printf("\n\n\t\t\t   4.  Don Muang(DMK)\t  -->\t Hat Yai (HDY)");
	printf("\n\n\t\t\t   5.  Hat Yai (HDY)\t  -->\t Suwannaphum (BKK)");		
	printf("\n\n\t\t\t   6.  Hat Yai (HDY)\t  -->\t Chiang Mai (CNX) ");	
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
	printf("\n\t\t-----------------------------------------------------------------");
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
	        		case'y':airline2();
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
	        		case'y':airline1();
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
	        		case'y':airline2();
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
	        		case'y':airline1();
			        	break;
		        	default:list();
				        break;
	     	}	
    	}
    	else if (flight==5){
			printf("\n\n\t\t-----------------------------------------------------------------\n");
	        printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
	        printf("\n\t\t\t\t\tFLIGHT DESTINATION");
	        printf("\n\n\n\n\t\t\t\t   DEPARTURE     :\tHat Yai (HDY)");
	        printf("\n\n\n\t\t\t\t   DESTINATION   :\tSuwannaphum (BKK)");
	       	printf("\n\n\t\t === \t\t                             \t\t     ===");	
        	printf("\n\t\t-----------------------------------------------------------------");
        	printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
				switch(getch()){
	        		case'y':airline1();
			        	break;
		        	default:list();
				        break;
	     	}	
    	}
    	else if (flight==6){
			printf("\n\n\t\t-----------------------------------------------------------------\n");
	        printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
	        printf("\n\t\t\t\t\tFLIGHT DESTINATION");
	        printf("\n\n\n\n\t\t\t\t   DEPARTURE     :\tHat Yai (HDY)");
	        printf("\n\n\n\t\t\t\t   DESTINATION   :\tChiang Mai (CNX)");
	       	printf("\n\n\t\t === \t\t                             \t\t     ===");	
        	printf("\n\t\t-----------------------------------------------------------------");
        	printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
				switch(getch()){
	        		case'y':airline1();
			        	break;
		        	default:list();
				        break;
	     	}	
    	}
    	else {
    		list();
		}
   }
void airline1(){
		system("cls");
	char name[MAX];
 	int no1,
		sit,
		airasia=650,
		nokair=890,
		thailionair=725,
		thaismile=1090,
		bangkokairways=1590,
		thaiairways=1290,
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
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t1. AIR ASIA\t\t\t%d:%d  AM.\t\t%d.-", hr1, min1, airasia);
	printf("\n\n\t\t2. NOK AIR\t\t\t%d:%d  AM.\t\t%d.-", hr2, min2, nokair);
	printf("\n\n\t\t3. THAI SMILE\t\t\t%d:%d  PM.\t\t%d.-", hr4, min4, thaismile);
	printf("\n\n\t\t4. BANGKOK AIRWAYS\t\t%d:%d  PM.\t\t%d.-", hr5, min5, bangkokairways);
	printf("\n\n\t\t5. THAI AIRWAYS\t\t\t%d:%d  PM.\t\t%d.-", hr6, min6, thaiairways);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
   	printf("\n\t\tENTER THE NUMBER FLIGHT : ");
   	scanf("%d",&no1);
   	printf("\n\t\tENTER YOUR NAME : ");
   	scanf("%s",&name);
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
    
	if (no1==1)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t AIR ASIA\t\t\t%d:%d  AM.\t\t%d.-", hr1, min1, airasia);
    printf("\n\n\t\tPASSENGERS NAME = %s ",name);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
				switch(getch()){
	        		case'y':airline3();
			        	break;
		        	default:airline1();
				        break;
	     	}
	}
	else if (no1==2)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t NOK AIR\t\t\t%d:%d  AM.\t\t%d.-", hr2, min2, nokair);
    printf("\n\n\t\tPASSENGERS NAME = %s ",name);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
				switch(getch()){
	        		case'y':airline3();
			        	break;
		        	default:airline1();
				        break;
	     	}
	}
	else if (no1==3)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t THAI SMILE\t\t\t%d:%d  PM.\t\t%d.-", hr4, min4, thaismile);
    printf("\n\n\t\tPASSENGERS NAME = %s ",name);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
				switch(getch()){
	        		case'y':airline3();
			        	break;
		        	default:airline1();
				        break;
	     	}
	}
	else if (no1==4)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t BANGKOK AIRWAYS\t\t%d:%d  PM.\t\t%d.-", hr5, min5, bangkokairways);
    printf("\n\n\t\tPASSENGERS NAME = %s ",name);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
				switch(getch()){
	        		case'y':airline3();
			        	break;
		        	default:airline1();
				        break;
	     	}
	}
	else if (no1==5)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t THAI AIRWAYS\t\t\t%d:%d  PM.\t\t%d.-", hr6, min6, thaiairways);
    printf("\n\n\t\tPASSENGERS NAME = %s ",name);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
				switch(getch()){
	        		case'y':airline3();
			        	break;
		        	default:airline1();
				        break;
	     	}
	}
}

void airline2(){
		system("cls");
	char name2[MAX];
	int no2,
		airasia=990,
		nokair=1190,
		thailionair=1260,
		hr1=7,
		min1=30,
		hr2=9,
		min2=45,
		hr3=11,
		min3=15;	
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
   	scanf("%d",&no2);
   	printf("\n\t\tENTER YOUR FULL NAME : ");
   	scanf("%s",&name2);
    printf("\n\t\tPRESS ENTER TO CONTINUE !! ");	
    	getch();
	     	
	if (no2==1)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t AIR ASIA\t\t\t%d:%d  AM.\t\t%d.-", hr1, min1, airasia);
    printf("\n\n\t\tPASSENGERS NAME = %s ",name2);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
				switch(getch()){
	        		case'y':airline3();
			        	break;
		        	default:airline2();
				        break;
	     	}
	}
	else if (no2==2)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t NOK AIR\t\t\t%d:%d  AM.\t\t%d.-", hr2, min2, nokair);
    printf("\n\n\t\tPASSENGERS NAME = %s ",name2);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
				switch(getch()){
	        		case'y':airline3();
			        	break;
		        	default:airline2();
				        break;
	     	}
	}
	else if (no2==3)	{
	system("cls");	
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tSEARCH FLIGHTS");
	printf("\n\n\n\t\t   FLIGHT:                      TIME:               PRICE(BAHT):");
    printf("\n\n\n\t\t THAI LION AIR\t\t%d:%d AM.\t\t%d.-", hr3, min3, thailionair);
    printf("\n\n\t\tPASSENGERS NAME = %s ",name2);
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
				switch(getch()){
	        		case'y':airline3();
			        	break;
		        	default:airline2();
				        break;
	     	}
	}
}

void info1(){
	system("cls");
	char firstname[MAX], lastname[MAX], national[MAX], email[MAX], contect[MAX];
	int  birthdate, phonenumber, flydate;
	printf("\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
    printf("\n\t\t\t\t\tCONTECT INFORMATION : ");
	printf("\n\n\t\t\tFIRST NAME :   ");
		scanf("%s", &firstname);
	printf("\t\t\tLAST NAME :   ");
		scanf("%s", &lastname);
	printf("\n\t\t\tDATE OF BIRTH :   ");
		scanf("%d", &birthdate);
	printf("\n\t\t\tNATIONAL :   ");
		scanf("%s", &national);	
	printf("\n\t\t\tMOBILE PHONE NUMBER :   ");
		scanf("%d", &phonenumber);
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
	printf("\n\n\t\t\tFLIGHT        : HAT YAI [HDY] --> BANGKOK [BKK]");
	printf("\n\t\tTIME          : 7:30 PM.");
	printf("\n\t\tDATE TO FLY   : 31/05/2017");
	printf("\n\n\n\t\t      FIRST NAME    : ABDULLOH");
	printf("\t\tLAST NAME  : LABU-API");
	printf("\n\t\t      DATE OF BIRTH : 12/03/1993");
	printf("\tNATIONAL   : THAI");
	printf("\n\t\t      EMAIL         : ABDULLOH.LABUAPI@GMAIL.COM");
	printf("\n\t\t      MOBILE PHONE NUMBER : 0611739427");		
	printf("\n\n\n\t\t\t\t\t\t\t\t  PRICE : 1290 BAHT");
	printf("\n\n\t\t === \t\t                             \t\t     ===");	
   	printf("\n\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t    PRESS N TO RETURN  |  PRESS Y TO CONTINUE  :  ");	
				switch(getch()){
	        		case'y':airline3();
			        	break;
		        	default:airline2();
				        break;
	     	}
	
}
void airline3(){
 system("cls");
	char y[10];
			printf("\n\n\t\t-----------------------------------------------------------------\n");
	        printf("\t\t === \t\t  AIRLINES RESERVATION SYSTEM\t\t     ===");
	        printf("\n\t\t\t\t\tCONFIRMATION");
	        printf("\n\n\n\n\t\t\t\t   ARE YOU SURE TO CONFIRM YOUR FLIGHT INFORMATION ?");
	       	printf("\n\n\t\t === \t\t                             \t\t     ===");
        	printf("\n\t\t-----------------------------------------------------------------");
        	printf("\n\t\t\t    PRESS N TO CANCEL  |  PRESS Y TO CONFIRM  :  ");	
	        scanf("%c",&y[10]);	
	        switch(y[10]){
	        case'y':airline4();
		    	break;
	        case'n':info1();
		    	break;
	        default : airline4();
	            break;
    }
}
void airline4(){
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
			case'1':list();
				break;
			default:airline4();
				break;
		}
}

