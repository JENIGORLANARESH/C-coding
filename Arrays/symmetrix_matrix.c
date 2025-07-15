#include <stdio.h>

int main(void){
	int row, col;
	printf("Enter row & col : ");
	scanf("%d %d", &row, &col);
	int arr[row][col];
	printf("Enter elements : \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("Element [%d][%d] : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	int c = 0;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			if(arr[i][j] != arr[j][i]){
				c++;
				break;
			}
		}
	}

	if(c == 0){
		printf("Matrix is symmetrix.\n");
	}
	else{
		printf("Matrix is not symmetrix.\n");
	}

	return 0;
}
