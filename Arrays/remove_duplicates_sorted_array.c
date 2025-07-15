#include <stdio.h>

int main(void){
	int n;
	printf("Enter no of elements : ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int temp[n];
	int t = 0;
	temp[t++] = arr[0];
	for(int i=1; i<n; i++){
		if(arr[i] != arr[i-1]){
			temp[t++] = arr[i];
		}
	}


	printf("After removing duplicates.\n");
	for(int i=0; i<t; i++){
		printf("%d ", temp[i]);
	}

	printf("\n");
	return 0;
}



