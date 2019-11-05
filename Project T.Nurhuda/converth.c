#include <math.h>
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
      int a,
          b,
          c,
          d=-1,
          choice;
      char const A=10,
                 B=11,
                 C=12,
                 D=13,
                 E=14,
                 F=15,
                 G=16;
 
      char ans;
 
      for(;;)
      {
 
       printf("Type in any integer to be converted into another base: ");
       scanf("&#37;d",&a);
       printf("Select another base representation (2 or 8 or 16). \n\n2 represents "
              "binary notation\n\n8 represents octal notation\n\n16 represents hexadecimal notation");
       scanf("%d",&choice);
 
       switch (choice)
       {
        case 2:
             b=a;
             while (b!=0)
             {
              c=b%2;
              b/=2;
              ++d;
              printf("%d x 2^%d\n",c,d);
             }
        break;
        {
         case 8:
              b=a;
              while (b!=0)
              {
               c=b%8;
               b/=8;
               ++d;
               printf("%d x 8^%d\n",c,d);
              }
        break;
        {
         case 16:
              b=a;
              while (b!=0)
              {
               c=b%16;
               b/=16;
               ++d;
               printf("\n%d x 16^%d\n",c,d);
              }
        }
        }
       }
 
      printf("Do you wish to run again? (Y/N)");
      ans=getchar();
      ans=getchar();
 
      if (ans=='N')
         break;
 
      }
      printf("\n");
      
      system("PAUSE");
      return 0;
}
