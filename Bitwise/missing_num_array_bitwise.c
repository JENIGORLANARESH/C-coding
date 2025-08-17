#include <stdio.h>

int missing(int arr[], int n){
	//from 0 to n-1
	int result = 0;
	for(int i=0; i<n-1; i++){
		result = result ^ arr[i];
	}
	//from 0 to n
	for(int i=0; i<n; i++){
		result = result ^ i;
	}
	return result;
}

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n-1];
	printf("Enter elements from 0 to n except one : \n");
	for(int i=0; i<n-1; i++){
		scanf("%d", &arr[i]);
	}

	int xor = missing(arr, n);

	printf("Missing number : %d\n", xor);

	return 0;
}
