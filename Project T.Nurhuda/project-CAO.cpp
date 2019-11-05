#include<stdio.h>
#include<conio.h>

int bin(int);
int oct(int);
int hex(int);

 main () 
{
	int n,base;
	printf("Enter your number :");
	scanf("%d",&n);
	printf("1. convert into binary\n"
	       "2. convert into octa\n"
	       "3. convert into hexa\n"
	       "enter your choice:");
	scanf("%d",&base);
	switch(base)
{
	 case 1:bin(n);
	 break;
	 case 2:oct(n);
	 break;
	 case 3:hex(n);
	 break;
	 default:printf("not match");
}
    getch();
}
  int bin(int k)
{
  int binary[50],i=0;
  while(k>0)
{
	binary[i]=k%2;
	i++;
	k=k/2;
}
    printf("\n binary no. is:");
	for(i=i-1;i>=0;i--)
{
	printf("%d",binary[i]);
}
    return 0;
}
    int oct(int k)
{
	int octal[50],i=0;
	  while(k>0)
{

   octal[i]=k%8;
   i++;
   k=k/8;
}

   printf("\n octal no. is: ");
   for(i=i-1;i>=0;i--)
{
   printf("%d",octal[i]);
}
   return 0;
}
   int hex(int k)
{
   int hexa[50],i=0;
   while(k>0)
 {
   hexa[i]=k%16;
   i++;
   k=k/16;
}
   printf("\n hexa decimal no. is:");
   for(i=i-1;i>=0;i--)
{
	if(hexa[i]==10)
	printf("A");
	 else if(hexa[i]==11)
	printf("B");
	 else if(hexa[i]==12)
	printf("C");
     else if(hexa[i]==13)
    printf("D");
   	 else if(hexa[i]==14)
   	printf("E");
	 else if(hexa[i]==15)
	printf("F");
	else
	printf("%d",hexa[i]);
}
    return 0;
}

	
  
