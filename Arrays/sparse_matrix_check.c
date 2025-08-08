#include <stdio.h>
#include <string.h>

int main(void){
	int row , col;
	printf("Enter row : ");
	scanf("%d", &row);
	printf("Enter col : ");
	scanf("%d", &col);
	int matrix[row][col];
	printf("Enter elements : \n");
	int count = 0;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("Enter matrix[%d][%d] = ", i, j);
			scanf("%d", &matrix[i][j]);
			if(matrix[i][j] == 0){
				count++;
			}
		}
	}

	if( count > ((row*col)/2)){
		printf("Sparse matrix\n");
	}
	else
		printf("Not Sparse matrix\n");
	return 0;
}
