#include <stdio.h>

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n-1];
	int sum = 0;
	printf("Enter elements from 1 to %d with missing one number.\n", n);
	for(int i=0; i<n-1; i++){
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}

	int total = n*(n+1)/2;

	int missing = total - sum;

	printf("Enter missing number : %d\n", missing);

	return 0;
}
