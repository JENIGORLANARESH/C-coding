#include <stdio.h>

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	printf("Before : \n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	int left = 0, right = n-1;
	while(left < right){
		if(arr[left] < 0 && arr[right] > 0){
			left++;
			right--;
		}
		else if(arr[left] < 0 && arr[right] < 0) left++;
		else if(arr[right] > 0 && arr[left] > 0) right--;
		else{
			int temp = arr[right];
			arr[right] = arr[left];
			arr[left] = temp;
			left++;
			right--;
		}
		
	}


	printf("After : \n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}


