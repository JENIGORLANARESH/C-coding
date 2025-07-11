#include<stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	int *ptr;
	printf("Enter number of elements n : \n");
	scanf("%d", &n);
	ptr =(int *)malloc(n*sizeof(int));
	if(ptr == NULL){
		printf("Memory not available\n");
		exit(1);
	}
	printf("Enter numbers : \n");

	for(int i=0; i<n; i++){
		scanf("%d",( ptr+i));
	}

	//print numbers.
	for(int i=0; i<n; i++){
		printf("%d ", *(ptr+i));
	}

	printf("\n");
	return 0;
}
