#include <stdio.h>

int main(void){
	int i,j,k;
	int size;
	printf("Enter size of array : ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter elements in array : \n");
	for(i=0; i<size; i++){
		scanf("%d", &arr[i]); 
	}
	
	/*insertion sort */
	for(i=1; i<size; i++){
		k = arr[i];
		for(j=i-1; j>=0 && k<arr[j]; j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = k;
	}

	for(i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
