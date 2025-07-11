#include <stdio.h>

int count(int *arr, int n);

int main(void){
	int n;
	printf("Enter array length : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements in array : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Number of duplicates : %d\n", count(arr, n));

	return 0;
}

int count(int *arr, int n){
	int c = 0, temp = 0;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i] == arr[j] && arr[j] != -1){
				temp++;
				arr[j] = -1;
			}			
		}
		if(temp > 0) c++;
		temp = 0;
	}
	return c;
}
