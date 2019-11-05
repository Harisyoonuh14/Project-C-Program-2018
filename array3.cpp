#include <stdio.h>
#define MAX 5

int main() {
	int array[MAX] = {1, 2, 4, 5};
	
	int N=4;
	int i=0;
	int index=2;
	int value=3;
	
	printf("Printing array before insertion -\n");
	
	for(i = 0; i < N; i++) {
		printf("array[%d]=%d \n", i,array[1]);
	}
	
	for(i=N; i >= index; i--) {
		array[i+1]=array[i];
	}
	
	array[index]=value;
	
	N++;
	
	printf("Priting array after insertion -\n");
	
	for(i=0; i<N; i++){
		printf("array[%d]=%d\n", i, array[i]);
	}
}
