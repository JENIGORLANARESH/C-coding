#include <stdio.h>
#include <stdlib.h>

int main(void){
	int row,col;
	printf("Enter row, col : ");
	scanf("%d %d", &row, &col);

	int (*p)[col] = malloc(row * sizeof(*p));
	
	if(p == NULL){
		printf("Memory allocation failed.\n");
		return 1;
	}

	printf("Enter elements : \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			scanf("%d", &p[i][j]);
		}
	}

	printf("Matrix : \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("%d\t", p[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
