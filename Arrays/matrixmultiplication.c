#include <stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 4

void print(int a, int b, int matrix[a][b]);

int main(void){
	int matrix1[ROW1][COL1], matrix2[ROW2][COL2], matrix3[ROW1][COL2];

	printf("Enter elements in matrix1 : \n");
	for(int i=0; i<ROW1; i++){
		for(int j=0; j<COL1; j++){
			printf("Enter element %d x %d : \n", i,j);
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("Enter elements for matrix2 : \n");

	for(int i=0; i<ROW2; i++){
                for(int j=0; j<COL2; j++){
                        printf("Enter element %d x %d : \n", i,j);
                        scanf("%d", &matrix2[i][j]);
                }
        }


	for(int i=0; i<ROW1; i++){
		for(int j=0; j<COL2; j++){
			matrix3[i][j]  = 0;
			for(int k=0; k<COL1; k++){
			
				matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
			}
			
		}
	}


	printf("Matrix1 : \n");
	print(ROW1, COL1, matrix1);
	printf("Matrix2 : \n");
	print(ROW2, COL2, matrix2);
	printf("Matrix3 : \n");
	print(ROW1, COL2, matrix3);
}

void print(int a, int b, int matrix[a][b]){
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
