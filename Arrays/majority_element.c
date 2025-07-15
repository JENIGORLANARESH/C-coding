#include <stdio.h>

int main(void){
	int n;
	printf("Enter no of elements : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	for(int i=0; i<n; i++){
		int count = 0;
		for(int j=i; j<n; j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
		if(count > (n/2)){
			printf("Majority element : %d\n", arr[i]);
			return 0;	
		}
	}

	printf("No majority element.\n");

	return 0;
}
