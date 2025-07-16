#include <stdio.h>

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	printf("Before : ");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	int start = arr[0];
	
	for(int i=0; i<n-1; i++){
		arr[i] = arr[i+1];
	}

	arr[n-1] = start;

	printf("After : ");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}
