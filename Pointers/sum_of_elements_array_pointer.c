#include <stdio.h>


int sum(int *arr, int n){
	int sum = 0;
	while( n > 0){
		sum = sum + *arr;
		arr++;
		n--;
	}
	return sum;
}


int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int s = sum(arr, n);

	printf("Sum = %d\n", s);

	return 0;
}
