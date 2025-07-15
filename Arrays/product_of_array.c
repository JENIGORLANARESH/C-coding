#include <stdio.h>

long long product(int *arr, int n){
	long long p = 1;
	for(int i=0; i<n; i++){
		p = p * arr[i];
	}
	return p;
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

	long long prod = product(arr, n);

	printf("Product : %lld\n", prod);

	return 0;
}
