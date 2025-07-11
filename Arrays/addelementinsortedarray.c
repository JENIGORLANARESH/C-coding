#include <stdio.h>

int main(void){
	int size = 10;
	int arr[size];
	int i=0, item;
	printf("Enter elements in array (ascending order) : \n");
	for(i=0; i<size-1; i++){
		scanf("%d", &arr[i]);
	}

	printf("Enter element to be inserted : \n");
	scanf("%d", &item);
	
	for(i=size-2; i>=0 && item < arr[i]; i--){
		arr[i+1] = arr[i];
	}

	arr[i+1] = item;

	for(i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
