#include <stdio.h>

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int matrix[n][n];

	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &matrix[i][j]);
		}
	}

	int d = n - 1;
	int sum = 0;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i == j){
				sum = sum + matrix[i][j];
			}
			else if(d == i+j){
				sum = sum + matrix[i][j];
			}
		}
	}

	printf("Sum of diagonals : %d\n", sum);

	return 0;
}
