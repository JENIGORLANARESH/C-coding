#include <stdio.h>

int main(void){
	int n;
	float k = 4;
	printf("Enter length of array : ");
	scanf("%d", &n);

	if(n < k){
		printf("Length of array is less than subarray.\n");
		return 0;
	}

	int arr[n];
	printf("Enter elements in array : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}


	float avg = 0;

	for(int i=0; i<=n-k; i++){
		float total = 0;
		for(int j=i; j<i+k; j++){
			total = total + arr[j];
		}
	
		float a = total/k;
		if(avg < a){
			avg = a;
		}
	}

	printf("Maximum average subarray : %.2f\n", avg);

	return 0;
}
