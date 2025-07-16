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

	int k;
	printf("Enter k (no of left rotate) : ");
	scanf("%d", &k);

	printf("Before : \n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	int temp[k];
	for(int i=0; i<k; i++){
		temp[i] = arr[i];
	}

	for(int i=0; i+k<n; i++){
		arr[i] = arr[i+k];
	}

	for(int i= 0; i<k; i++){
		arr[n-k+i] = temp[i]; 
	}



	printf("After : \n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
