#include<stdio.h>
main (){
	int thing,thing2;
	int pro;
	
    printf("---------------Main Menu-------------------\n");
    printf("1.Laptop\n\n");
    printf("2.Smartphone\n");
    printf("-------------------------------------------\n");
    printf("Select the product 1 or 2 \n");
    scanf("%d",&pro);
   

    
    if (pro==1) {
	printf("------------------------Laptop---------------------------\n");
	printf("---------------------------------------------------------\n");
	printf("------1.Acer Nitro 5                                 \n");
	printf("------2.Acer Aspire E5-551G-T57G                     \n");
	printf("------3.ACER Swift 3 SF315-41                        \n");
	printf("------4.ACER Aspire 7 A715-71G575X                   \n");
	printf("------5.ACER Predator Triton 700 PT715-517261        \n");
	printf("------6.LENOVO Legion Y520                           \n");
	printf("------7.LENOVO YOGA 52081C800D6TA, 81C800D7TA        \n");
	printf("------8.HP Omen 17 an008TX                           \n");
	printf("------9.HP OMEN 15 ax201TX                           \n");
	printf("------10.ASUS VivoBook S14 S410UNEB114T              \n\n");
	printf("select what you want to know the price 1-10 : ");
	scanf("%d",&thing);
}

//=================================================================	
	if(thing==1){
	printf("----------------------------\n");
	printf("         Acer Nitro 5       \n");
	printf("----------22,590 baht-------\n");return;
	}
	else if(thing==2){
	printf("----------------------------\n");
	printf(" Acer Aspire E5-551G-T57G\n");
	printf("----------15,320 baht-------\n");return;
	}
	else if(thing==3){
	printf("----------------------------\n");
	printf("     ACER Swift 3 SF315-41 \n");
	printf("----------21,900 baht-------\n");return;
	}
	else if(thing==4){
	printf("----------------------------\n");
	printf("     ACER Aspire 7 A715-71G575X \n");
	printf("----------22,900 baht-------\n");return;
    }
    else if(thing==5){
	printf("------------------------------------\n");
	printf(" ACER Predator Triton 700 PT715-517261 \n");
	printf("----------119,900 baht-------\n");return;
	}
	else if(thing==6){
	printf("----------------------------\n");
	printf("      LENOVO Legion Y520  \n");
	printf("----------33,990 baht-------\n");return;
	}
	else if(thing==7){
	printf("----------------------------------\n");
	printf(" LENOVO YOGA 52081C800D6TA, 81C800D7TA \n");
	printf("----------29,990 baht------------\n");return;
	}
	else if(thing==8){
	printf("----------------------------\n");
	printf("   HP Omen 17 an008TX \n");
	printf("----------70,990 baht-------\n");return;
	}
	else if(thing==9){
	printf("----------------------------\n");
	printf("    HP OMEN 15 ax201TX \n");
	printf("----------29,900 baht-------\n");return;
	}
	else if(thing==10){ 
	printf("----------------------------\n");
	printf("    ASUS VivoBook S14 S410UNEB114T \n");
	printf("----------21,900 baht-------\n");return;
	} 
	 else if (thing>10){
 	printf("Unknown");
} 
//======================================================================================

    else if (pro==2){
	printf("------------------------Smartphone---------------------------\n");
	printf("---------------------------------------------------------\n");
	printf("------1.Apple iPhone 8                   \n");
	printf("------2.Apple iPhone X                   \n");
	printf("------3.Samsung Galaxy A8 (2018)         \n");
	printf("------4.Samsung Galaxy Note 8            \n");
	printf("------5.Samsung Galaxy S8                \n");
	printf("------6.HTC U11                          \n");
	printf("------7.HTC U Play                       \n");
	printf("------8.HTC U Ultra                      \n");
	printf("------9.Huawei Mate 10 Pro               \n");
	printf("------10.Huawei Nova 2i                  \n\n");
	printf("select what you want to know the price 1-10 : ");
	scanf("%d",&thing2);
}
	 else {
 	printf("Unknown");return;
}
     if (thing2==1){
	printf("----------------------------\n");
	printf("         Apple iPhone 8       \n");
	printf("----------28,500 baht-------\n");
	}
	else if(thing2==2){
	printf("----------------------------\n");
	printf("      Apple iPhone X        \n");
	printf("----------40,500 baht-------\n");
	}
	else if(thing2==3){
		printf("----------------------------\n");
	printf("   Samsung Galaxy A8 (2018) \n");
	printf("----------15,990 baht-------\n");
	}
    else if(thing2==4){
	printf("------------------------------------\n");
	printf(" Samsung Galaxy Note 8  \n");
	printf("----------25,900 baht-------\n");
	}
	else if(thing2==5){
	printf("----------------------------\n");
	printf("      Samsung Galaxy S8   \n");
	printf("----------33,990 baht-------\n");
	}
	else if(thing2==6){
	printf("----------------------------------\n");
	printf("         HTC U11          \n");
	printf("----------25,990 baht------------\n");
	}
	else if(thing2==7){
	printf("----------------------------\n");
	printf("       HTC U Play    \n");
	printf("----------14,990 baht-------\n");
	}
	else if(thing2==8){
	printf("----------------------------\n");
	printf("       HTC U Ultra  \n");
	printf("----------22,490 baht-------\n");
	}
	else if(thing2==9){
	printf("----------------------------\n");
	printf("    Huawei Mate 10 Pro  \n");
	printf("----------27,900 baht-------\n");
	}
		else if(thing2==10){
	printf("----------------------------\n");
	printf("    Huawei Nova 2i   \n");
	printf("----------10,900 baht-------\n");
	}
	 else {
 	printf("Unknown");
 }
 }
