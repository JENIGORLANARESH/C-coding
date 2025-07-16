#include <stdio.h>

int sum_partition(int *arr, int start, int end){
	if(start > end) return 0;
	if(start == end) return arr[start];
	int mid = (start + end)/2;

	return sum_partition(arr, start, mid) + sum_partition(arr, mid+1, end);
}

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	int sum = sum_partition(arr, 0, n-1);
	printf("sum : %d\n", sum);
	return 0;
}
