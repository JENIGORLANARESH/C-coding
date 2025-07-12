#include <stdio.h>

void display(int n, int matrix[n][n]){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", matrix[i][j]); 
		}
		printf("\n");
	}
	printf("\n");
}

int main(void){
	int n;
	printf("Enter n*n : ");
	scanf("%d", &n);
	int matrix[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	display(n, matrix);
	printf("Lower triangle : \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}


