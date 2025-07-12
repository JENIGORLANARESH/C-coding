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
	int row,col;
	printf("Enter row & col : ");
	scanf("%d %d", &row, &col);
	int matrix[row][col];
	printf("Enter elements : \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	display(row, col, matrix);
	int trans[col][row];

	for(int i=0; i<col; i++){
		for(int j=0; j<row; j++){
			trans[i][j] = matrix[j][i];
		}
	}
	printf("Transpose : \n");
	display(col, row, trans);

	return 0;
}
