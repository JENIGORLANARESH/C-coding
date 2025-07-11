#include<stdio.h>
#include<stdlib.h>

int main(void){

	int *arr;
	int n;
	printf("Enter number of elements in array n : \n");
	scanf("%d", &n);

	arr = (int *)malloc(n*sizeof(4));

	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", arr+i);
	}

	printf("Array : ");
	for(int i=0; i<n; i++){
		printf("%d ", *(arr+i));
	}

	printf("\n");

	return 0;
}
