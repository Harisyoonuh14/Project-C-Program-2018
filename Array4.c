#include <stdio.h>
main() {
	int LA[]={1,3,5,7,8};
	int item=3,item1=7, n=5;
	int i=0, j=0;
	int sum=item+item1;
	
printf("The original array elements are :\n");

for(i=0; i<n; i++) {
	printf("LA[%d]=%d\n", i, LA[i]);
}
	while(j < n){
		if(LA[j]==item){
			break;
		}
		j=j+1;
	}
	
	printf("Found element %d at position %d\n", item, j+1);
	printf("Found element %d at position %d\n", item1, j+3);
	printf("plus:%d\n",sum);
}
