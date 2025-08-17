#include <stdio.h>

int xor_subsets(int arr[], int n){
	if(n == 1)
		return arr[0];
	return 0;
}

int main(void){
	int n;
	printf("Enter no of elements in array : ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	printf("XOR of subsets of array = %d\n", xor_subsets(arr, n));

	return 0;
}
