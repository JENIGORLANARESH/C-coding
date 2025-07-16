#include <stdio.h>

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elments : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	

	printf("Before : \n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	int start, end;
	printf("Enter start index & end index of portion : ");
	scanf("%d %d", &start, &end);
	if(start < 0 || end >=n){
		printf("Invalid range.\n");
		return 0;
	}


	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	printf("After portion reverse : \n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}
