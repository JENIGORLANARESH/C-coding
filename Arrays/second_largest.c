#include <stdio.h>
#include <limits.h>


void display(int *arr, int n){
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int second(int *arr, int n){
	int a = INT_MIN, b = INT_MIN;
	for(int i=0; i<n; i++){
		if(arr[i] > a){
			b = a;
			a = arr[i];
		}
		else if(arr[i]<a && arr[i]>b){
			b = arr[i];
		}
	}
	return b;
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
	display(arr, n);
	if(n<2){
		printf("Only one element present in array.\n");
		return 0;
	}
	int sec = second(arr, n);
	printf("Second largest : %d\n", sec);
	return 0;
}
