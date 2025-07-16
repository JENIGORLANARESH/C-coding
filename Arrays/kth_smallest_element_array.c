#include <stdio.h>

int main(void){
	int n, k;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("Enter k (kth smallest) :  ");
	scanf("%d", &k);
	if(k<1 || k>n){
		printf("k is out of range.\n");
	}
	else printf("kth smallest element : %d\n", arr[k-1]);
	return 0;
}
