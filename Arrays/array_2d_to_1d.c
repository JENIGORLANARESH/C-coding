#include <stdio.h>

int main(void){
	int row, col;
	printf("Enter row & col  : ");
	scanf("%d %d", &row, &col);
	int arr[row][col];
	int temp[row*col];
	printf("Enter elements in 2d array : \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("Element  [%d][%d] : ", i, j);
		        scanf("%d", &arr[i][j]);	       
		}
	}

	int k = 0;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			temp[k++] = arr[i][j];
		}
	}

	printf("1D array row wise : \n");
	for(int i=0; i<row*col; i++){
		printf("%d " , temp[i]);
	}

	printf("\n");
	return 0;
}
