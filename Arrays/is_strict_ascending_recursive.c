#include <stdio.h>

int is_ascending(int *arr, int n){
	if(n <= 1) return 1;
	if(arr[n-1] <= arr[n-2]) return 0;
	return is_ascending(arr, n-1);
}

int main(void){
	int n; 
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int temp = is_ascending(arr, n);
	if(temp) printf("Is Ascending.\n");
	else printf("Is Not Ascending.\n");
	return 0;
}
