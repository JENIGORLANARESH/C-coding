#include <stdio.h>

int main(void){
	int n;
	printf("Enter length of array : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements in array : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	printf("Non Repeated Elements : ");
	for(int i=0; i<n; i++){
		int count = 0;
		for(int j=0; j<n; j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
		if(count == 1){
			printf("%d " , arr[i]);
		}
	}

	printf("\n");
	return 0;
}
