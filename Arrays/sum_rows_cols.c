#include <stdio.h>


int main(void){
	int row, col;
	printf("Enter row & col : ");
	scanf("%d %d", &row, &col);
	int arr[row+1][col+1];

	for(int i=0; i<=row; i++){
		for(int j=0; j<=col; j++){
			arr[i][j] = 0;
		}
	}

	printf("Enter elements : \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("Element [%d][%d] : ", i, j);
			scanf("%d", &arr[i][j]);
			arr[i][row] = arr[i][j] + arr[i][row];	// sum cols
			arr[col][j] = arr[col][j] + arr[i][j];	// sum rows
			arr[row][col] = arr[i][j] + arr[row][col];	// sum total
		}
	}


	printf("After sum of rows & cols : \n");
	for(int i=0; i<row+1; i++){
		for(int j=0; j<col+1; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	return 0;
}
