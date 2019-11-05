#include<stdio.h> 
#include<string.h> 
void conversion(char num[20],int b1,int b2);
void conversion2(char num[20],int b1);
void conversion3(char num[20],int b1);
void conversion4(char num[20],int b1);
void conversion5(char num[20],int b1);
main() 
{    
    char num[20]; 
    int se,base1,base2;
	system("cls");
    printf("\n\n\t\t\t=============Conversion Any Base System===================");
    printf("\n\n\t\t\tEnter The Number : "); 
    scanf("%s",&num); 
    printf("\n\t\t\tBase : ");
    scanf("%d",&base1);
    printf("\n\t\t\t1.Converted To Binary");
    printf("\n\t\t\t2.Converted To Octa");
    printf("\n\t\t\t3.Converted To decimal");
    printf("\n\t\t\t4.Converted To Hexa");
    printf("\n\t\t\t5.Converted To Any Base");
   printf("\n\n\t\t\tSelect The Base To Converted : ");
    scanf("%d",&se);
    
    if (se==5){
    printf("\n\t\t\tEnter the base to be converted:"); 
    scanf("%d",&base2); 
        conversion(num,base1,base2); 
	}
	else if (se==1){
	printf("\n\n\t\t\tConverted To Binary");
	conversion2(num,base1); 
	}
	else if (se==2){
    printf("\n\t\t\tConverted To Octa");
	conversion3(num,base1); 
	}
	else if (se==3){
    printf("\n\t\t\tConverted To decimal");
	conversion4(num,base1); 
	}
	else if (se==4){
    printf("\n\t\t\tConverted To Hexa");
	conversion5(num,base1); 
	}
} 

void conversion2(char num[20],int b1) 
{ 
    int count=0,r,digit,i,n=0,b=1,b2=2; 
    
    for(i=strlen(num)-1;i>=0;i--) 
        { 
         if(num[i]>='A'&&num[i]<='F') 
            { 
             digit=num[i]-'0'-7; 
            } 
         else 
            { 
             digit=num[i]-'0'; 
            } 
        n=digit*b+n; 
        b=b*b1; 
        } 
    while(n!=0) 
    { 
        r=n%b2; 
        digit='0'+r; 
        if(digit>'9') 
        { 
            digit+=7; 
        } 
         num[count]=digit; 
         count++; 
         n=n/b2; 
    } printf("\n\t\t\tConverted is : ");
for(i=count-1;i>=0;i--) 
    { 
     printf("%c",num[i]);

    } 
    	 printf(" base %d",b2); 
 printf("\n"); 
 printf("\n\t\t\tPRESS ENTER TO TRY AGAIN !!!");
 switch (getch()){
 	default : main();break;
 }
}
void conversion(char num[20],int b1,int b2) 
{ 
    int count=0,r,digit,i,n=0,b=1; 
    
    for(i=strlen(num)-1;i>=0;i--) 
        { 
         if(num[i]>='A'&&num[i]<='F') 
            { 
             digit=num[i]-'0'-7; 
            } 
         else 
            { 
             digit=num[i]-'0'; 
            } 
        n=digit*b+n; 
        b=b*b1; 
        } 
    while(n!=0) 
    { 
        r=n%b2; 
        digit='0'+r; 
        if(digit>'9') 
        { 
            digit+=7; 
        } 
         num[count]=digit; 
         count++; 
         n=n/b2; 
    } printf("\n\t\t\tConverted is : ");
for(i=count-1;i>=0;i--) 
    { 
     printf("%c",num[i]);

    } 
    	 printf(" base %d",b2); 
 printf("\n"); 
 printf("\n\t\t\tPRESS ENTER TO TRY AGAIN !!!");
 switch (getch()){
 	default : main();break;
 }
}
void conversion3(char num[20],int b1) 
{ 

    int count=0,r,digit,i,n=0,b=1,b2=8; 
    
    for(i=strlen(num)-1;i>=0;i--) 
        { 
         if(num[i]>='A'&&num[i]<='F') 
            { 
             digit=num[i]-'0'-7; 
            } 
         else 
            { 
             digit=num[i]-'0'; 
            } 
        n=digit*b+n; 
        b=b*b1; 
        } 
    while(n!=0) 
    { 
        r=n%b2; 
        digit='0'+r; 
        if(digit>'9') 
        { 
            digit+=7; 
        } 
         num[count]=digit; 
         count++; 
         n=n/b2; 
    } printf("\n\t\t\tConverted is : ");
for(i=count-1;i>=0;i--) 
    { 
     printf("%c",num[i]);

    } 
    	 printf(" base %d",b2); 
 printf("\n"); 
 printf("\n\t\t\tPRESS ENTER TO TRY AGAIN !!!");
 switch (getch()){
 	default : main();break;
 }
}
void conversion4(char num[20],int b1) 
{ 
    int count=0,r,digit,i,n=0,b=1,b2=10; 
    
    for(i=strlen(num)-1;i>=0;i--) 
        { 
         if(num[i]>='A'&&num[i]<='F') 
            { 
             digit=num[i]-'0'-7; 
            } 
         else 
            { 
             digit=num[i]-'0'; 
            } 
        n=digit*b+n; 
        b=b*b1; 
        } 
    while(n!=0) 
    { 
        r=n%b2; 
        digit='0'+r; 
        if(digit>'9') 
        { 
            digit+=7; 
        } 
         num[count]=digit; 
         count++; 
         n=n/b2; 
    } printf("\n\t\t\tConverted is : ");
for(i=count-1;i>=0;i--) 
    { 
     printf("%c",num[i]);

    } 
    	 printf(" base %d",b2); 
 printf("\n"); 
 printf("\n\t\t\tPRESS ENTER TO TRY AGAIN !!!");
 switch (getch()){
 	default : main();break;
 }
}
void conversion5(char num[20],int b1) 
{ 
    int count=0,r,digit,i,n=0,b=1,b2=16; 
    
    for(i=strlen(num)-1;i>=0;i--) 
        { 
         if(num[i]>='A'&&num[i]<='F') 
            { 
             digit=num[i]-'0'-7; 
            } 
         else 
            { 
             digit=num[i]-'0'; 
            } 
        n=digit*b+n; 
        b=b*b1; 
        } 
    while(n!=0) 
    { 
        r=n%b2; 
        digit='0'+r; 
        if(digit>'9') 
        { 
            digit+=7; 
        } 
         num[count]=digit; 
         count++; 
         n=n/b2; 
    } printf("\n\t\t\tConverted is : ");
for(i=count-1;i>=0;i--) 
    { 
     printf("%c",num[i]);

    } 
    	 printf(" base %d",b2); 
 printf("\n"); 
 printf("\n\t\t\tPRESS ENTER TO TRY AGAIN !!!");
 switch (getch()){
 	default : main();break;
 }
}


