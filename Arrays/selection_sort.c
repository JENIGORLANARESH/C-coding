#include<stdio.h>
void selection(int arr[], int n);
#define MAX 100

int main(void){
	int array[MAX];
	int n;
	printf("Enter number of elements in array : ");
	scanf("%d", &n);
	printf("Enter elements in array : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	selection(array, n);
	return 0;
}

void selection(int arr[], int n){
	for(int i=0; i<n-1; i++){
		int index = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[index]){
				index = j;
			}
		}
		int temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
	}


	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}
