#include <stdio.h>

int main(void){
	int n, odd=0;
	printf("Enter no of elements in array : ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
		odd = odd ^ arr[i];
	}

	printf("Odd occuring element : %d\n", odd);

	return 0;
}
