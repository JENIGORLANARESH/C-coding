#include <stdio.h>

int sum_evens(int *arr, int n){
	n--;
	if(n==0){
		if((arr[0]%2) == 0) return arr[0];
		else return 0;
	}

	if( (arr[n]%2) == 0){
		return arr[n] + sum_evens(arr, n);
	}
	else{
		return sum_evens(arr, n);
	}

}

int main(void){
	int n;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int sum = sum_evens(arr, n);

	printf("Sum of evens : %d\n", sum);
	return 0;
}
