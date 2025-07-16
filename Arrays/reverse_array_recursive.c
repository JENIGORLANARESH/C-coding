#include <stdio.h>

void reverse(int *arr, int i, int j){
	if(i<j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
		reverse(arr, i, j);
	}
	else return;
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

	reverse(arr, 0, n-1);
	printf("After reversing : \n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
