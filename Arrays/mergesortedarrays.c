#include <stdio.h>
#define MAX 100
void merge(int arr1[], int arr2[], int arr3[], int n1, int n2);

int main(void){
	int arr1[MAX], arr2[MAX], arr3[2*MAX];
	int n1, n2;
	printf("Enter number of elments in arr1 : \n");
	scanf("%d", &n1);
	printf("Enter elements in arr1 : \n");
	for(int i=0; i<n1; i++){
		scanf("%d", &arr1[i]);
	}
	printf("Enter number of elements in arr2 : \n");
	scanf("%d", &n2);
	printf("Enter elements i arr2 : \n");
	for(int i=0; i<n2; i++){
		scanf("%d", &arr2[i]);
	}

	merge(arr1, arr2, arr3, n1, n2);

	for(int i=0; i< n1 + n2; i++){
		printf("%d ", arr3[i]);
	}

	printf("\n");

	return 0;
}

void merge(int arr1[], int arr2[], int arr3[], int n1, int n2){
	int i=0,j=0,k=0;

	while( (i < n1) && (j < n2) ){
		if( arr1[i] < arr2[j]){
			arr3[k] = arr1[i];
			k++;
			i++;
		}
		else{
			arr3[k] = arr2[j];
			k++;
			j++;
		}
	}


	while(i<n1){
		arr3[k] = arr1[i];
		i++;
		k++;
	}
	while(j<n2){
		arr3[k] = arr2[j];
		k++;
		j++;
	}

	return;
}
