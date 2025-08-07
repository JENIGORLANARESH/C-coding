#include <stdio.h>
#include <stdlib.h>

int main(void){
	int row,col;
	printf("Enter row, col : ");
	scanf("%d %d", &row, &col);

	int **ptr = (int **)malloc(row * sizeof(int *));
	if(ptr == NULL){
		printf("Memory allocation failed.\n");
		return 1;
	}

	for(int i=0; i<row; i++){
		ptr[i] = (int *)malloc(col * sizeof(int));
		if(ptr[i] == NULL){
			printf("Memory allocation failed.\n");
			return 1;
		}
	}

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			scanf("%d", &ptr[i][j]);
		}
	}

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("%d\t", ptr[i][j]);
		}
		printf("\n");
	}

	for(int i=0; i<row; i++){
		free(ptr[i]);
	}

	return 0;
}
