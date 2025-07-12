#include <stdio.h>


int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int matrix[n][n];
	int sum = 0;
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &matrix[i][j]);
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if( (i+j) == (n-1) ){
				sum = sum + matrix[i][j];
			}
		}
	}

	printf("Sum = %d\n", sum);

	return 0;
}
