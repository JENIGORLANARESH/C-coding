#include <stdio.h>

int main(void){
	int arr[] = {1,2,3,4,5};

	int (*p)[5] = &arr;

	for(int i=0; i<5; i++){
		printf("(*p)[%d] = %d\n", i, (*p)[i]);
	}
	printf("\n");

	return 0;
}
