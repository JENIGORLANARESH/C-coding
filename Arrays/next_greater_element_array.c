#include <stdio.h>

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int great[n];

	for(int i=0; i<n; i++){
		int temp = 0;
		for(int j=i; j<n; j++){
			if(arr[j] > arr[i]){
				great[i] = arr[j];
				temp = 1;
				break;
			}
		}
		if(!temp) great[i] = -1;
	}

	printf("Array : ");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	
	
	printf("\nNext Great : ");
	for(int i=0; i<n; i++){
		printf("%d ", great[i]);
	}

	printf("\n");
	return 0;
}
