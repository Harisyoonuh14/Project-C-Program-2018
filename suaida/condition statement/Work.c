#include<stdio.h>
main (){
	int score;

	printf("your score: ");
	scanf("%d",&score);
    printf("----------------------\n");
   	printf("your score is %d\n",score);
if (score<50) {
		printf("Your grade is F\n");
	}
	else if (score<=55) {
		printf("Your grade is D\n");
	}
	else if (score<=60){
		printf("Your grade is D+\n");
	}
	else if (score<=65){
		printf("Your grade is C\n");
	}
	else if (score<=70){
		printf("Your grade is C+\n");
	}
	else if (score<=75){
		printf("Your score is B\n");
	}
	else if (score<=80) {
		printf("Your score is B+\n");
    }
		else {
			printf("Your score is A\n");
	 }
}
