#include <stdio.h>

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements :\n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	for(int i=0; i<n; i++){
		printf("%d^2 = %d\n", arr[i], arr[i] * arr[i]);
	}

	return 0;
}
