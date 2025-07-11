#include<stdio.h>
void bubble(int n, int arr[]);

int main(void){
	int arr[50];
	int n;
	printf("Enter number of elements in array : ");
	scanf("%d", &n);
	printf("Enter elements in the array : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	bubble(n, arr);
	return 0;
}

void bubble(int n, int arr[]){
	for(int i = 0; i < n; i++){
		for(int j=0; j<n-1-i; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}

	return;
}

