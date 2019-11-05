#include <stdio.h>
main() {
	int LA[]={1,3,5,7,8,12};
	int item=9, k=4, n=5;
	int i=0, j=n;
	
	printf("The original array elements are :\n");
	
	for(i=0; i<n; i++) {
		printf("LA[%d]=%d\n", i, LA[i]);
	}
	
	n=n+2;
	
	while(j>=k) {
		LA[j+1]=LA[j];
		j=j-1;
	}
	
	LA[k]=item;
	
	printf("The arrayelements after insertion :\n");
	
	for(i=0; i<n; i++) {
		printf("LA[%d]=%d\n" , i, LA[i]);
   }
}

