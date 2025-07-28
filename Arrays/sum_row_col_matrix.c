#include <stdio.h>

int main(void){
	int n = 3;
	int matrix[3][3];
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("Enter matrix[%d][%d] : ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}

	printf("matrix : \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for(int i=0; i<n; i++){
		int sum = 0;
		for(int j=0; j<n; j++){
			sum = sum + matrix[i][j];
		}
		printf("Row%d total : %d\n", i+1, sum);
	}

	for(int i=0; i<n; i++){
		int sum = 0;
		for(int j=0; j<n; j++){
			sum = sum + matrix[j][i];
		}
		printf("Col%d total : %d\n", i+1, sum);
	}

	return 0;
}
