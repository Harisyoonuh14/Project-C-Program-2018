#include <stdio.h>
#define MAX 5

void main() {
	
    int array[MAX] = {};
    int n=4;
    int i=0;
    int value=1;

printf("Printing array before insertion -\n");

    for(i=0; i < n; i++) {
    	printf("array[%d]=%d\n", i, array[i]);
	}
	
	for(i=n; i >= 0; i--) {
		array[i+1]=array[i];
	}
	
	array[0]=value;
	
	n++;
	
	printf("Printing array before insertion -\n");
	
	for(i=0; i<n; i++) {
		printf("array[%d]=%d\n", i, array[i]);
	}

}
