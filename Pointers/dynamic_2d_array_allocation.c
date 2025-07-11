#include <stdio.h>
#include <stdlib.h>

int main(void){
	int row, col;
	int **arr;
	printf("Enter number of rows and columns : ");
	scanf("%d %d", &row, &col);

	arr = (int **)malloc(row*sizeof(int));
	for(int i=0; i<row; i++){
		*(arr+i) = (int *)malloc(col*sizeof(int));
	}

	printf("Enter elements in array : \n");

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("Enter arr[%d][%d] : ", i,j);
			scanf("%d", (*(arr+i)+j) );
		}
	}

	printf("Array : \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("%d ", *(*(arr+i)+j) );
		}
		printf("\n");
	}
	
	return 0;
}
