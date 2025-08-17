#include <stdio.h>

int singleNumber(int arr[], int n){
	int result = 0;
	int leftshift, numberOfSetBits;
	for(int i=0; i<32; i++){
		numberOfSetBits = 0;
		leftshift = 1<<i;
		for(int j=0; j<n; j++){
			if(arr[j] & leftshift){
				numberOfSetBits++;
			}
		}
		
		if( (numberOfSetBits%3) != 0){
			result = result | leftshift;
		}
	}
	return result;
}

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements each element should repeat trice except one: \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int result = singleNumber(arr, n);
	printf("Single Number : %d\n", result);
	return 0;
}
