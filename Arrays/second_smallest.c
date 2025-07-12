#include <stdio.h>
#include <limits.h>

void display(int *arr, int n){
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int second_smallest(int *arr, int n){
	int a=INT_MAX, b=INT_MAX;
	for(int i=0; i<n; i++){
		if(arr[i]<a){
			b = a;
			a = arr[i];
		}
		else if(arr[i]>a && arr[i]<b){
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
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	display(arr, n);

	int sec = second_smallest(arr,n);
	printf("Second smallest element : %d\n", sec);

	return 0;
}
