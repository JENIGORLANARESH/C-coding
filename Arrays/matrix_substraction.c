#include <stdio.h>

void display(int row, int col, int matrix[row][col]){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

int main(void){
	int row, col;
	printf("Enter matrix row and col for matrices ");
	scanf("%d %d", &row, &col);
	
	int matrix1[row][col], matrix2[row][col], sum[row][col];

	printf("Enter elements for matrix1 : \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			scanf("%d", &matrix1[i][j]);
		}
	}

	display(row, col, matrix1);

	printf("Enter elements for matrix2 : \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			scanf("%d", &matrix2[i][j]);
		}
	}

	display(row, col, matrix2);

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			sum[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}

	printf("Sum : \n");
	display(row, col, sum);

	return 0;
}
