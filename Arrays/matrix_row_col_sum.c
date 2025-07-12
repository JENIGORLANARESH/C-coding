#include <stdio.h>

void display(int r, int c, int matrix[r][c]){
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(void){
	int row, col;
	printf("Enter row and col :\n");
	scanf("%d %d", &row, &col);
	int matrix[row][col];
	printf("Enter elements : \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	display(row,col,matrix);

	for(int i=0; i<row; i++){
		int count = 0;
		for(int j=0; j<col; j++){
			count = count + matrix[i][j];
		}
		printf("Row%d : %d\n", i+1, count);
	}

	for(int j=0; j<col; j++){
		int sum = 0;
		for(int i=0; i<row; i++){
			sum = sum + matrix[i][j];
		}
		printf("Col%d : %d\n", j+1, sum);
	}

	return 0;
}
