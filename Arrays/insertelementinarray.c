#include <stdio.h>

int main(void){
	int size = 10, item, index;
	int arr[size];
	printf("Enter elements in array : \n");
	for(int i=0; i<size-1; i++){
		scanf("%d", &arr[i]);
	}

	printf("Enter element to be entered : ");
	scanf("%d", &item);
	printf("Enter index where item to be inserted in array : ");
	scanf("%d", &index);

	int i=0;
	for(i=size-2; i>=index; i--){
		arr[i+1] = arr[i];
	}
	arr[i+1] = item;

	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;

}
