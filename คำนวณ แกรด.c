#include <stdio.h>
main() {
	int score;
	
	printf("score is:");
	scanf("%d" ,&score);

	if (score<50) {
		printf("You got F");
	}
	else  if (score<55){
			printf("You got D");
		}
	else if (score<60){
		printf("You got D+");
	}
	else if (score<65){
		printf("You got C");
	}
	else if (score<70){
		printf("You got C+");
	}
	else if (score<75){
		printf("You got B");
	}
	else if (score<80){
		printf("You got B+");
	}
	else {
		printf("You got A");
	}
		
	
	
	
}
