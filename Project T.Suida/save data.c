#include<stdio.h>
       typedef struct
    {
      int select;
      char lastname[25];
      char firstname[25];
      char address[25];
      char phonenumber[25];
    } addressbook;

    addressbook a[5];
     FILE *fp;
    int main()
    {
      int i;

     for( i=0; i<5 ; i++)
    {
     printf("enter details\n");
       printf("enter lastname:\n");
       scanf("%s", a[i].lastname);
       printf("enter firstname:\n");
       scanf("%s", a[i].firstname);
       printf("enter address:\n");
       scanf("%s", a[i].address);
       printf("enter phone number:\n");
       scanf("%s", a[i].phonenumber);
      fp = fopen("addressbook.dat","a+");
      fwrite(&a, sizeof(a), 1, fp);
      fclose(fp);
    }

    for(i=0; i<5; i++)
    {
      fopen("addressbook.dat", "r");
      fread(&a, sizeof(a), 1, fp );
      printf("lastname:%s\n", a[i].lastname);
      printf("firstname:%s\n", a[i].firstname);
      printf("address:%s\n", a[i].address);
      printf("phonenumber:%s\n", a[i].phonenumber);
      fclose(fp);
    }
    return 0;
    }
