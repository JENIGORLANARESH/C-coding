#include<stdio.h>
void sort(int arr[], int n);

int main(void){
	int n;
	printf("Enter size of the array : \n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements in array : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	sort(arr, n);

	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

void sort(int arr[], int n){
	int j=n-1;
	int k=0;
	while(k<j){
		if( (arr[k]%2) == 0){
			arr[k] = arr[k] + arr[j];
			arr[j] = arr[k] - arr[j];
			arr[k] = arr[k] - arr[j];

			j--;
		}
		else{
			k++;
		}
	}	
}
