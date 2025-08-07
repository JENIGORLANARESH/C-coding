#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	printf("Enter number of elements : ");
	scanf("%d", &n);

	int *arr = (int *)malloc(n * sizeof(int));

	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int max = 0;
	for(int i=0; i<n; i++){
		if(max < arr[i])
			max = arr[i];
	}

	printf("Largest element : %d\n", max);
	return 0;
}
