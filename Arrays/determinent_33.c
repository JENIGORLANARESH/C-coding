#include <stdio.h>

int main(void){
	int matrix[3][3];
	printf("Enter elements : \n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &matrix[i][j]);
		}
	}

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// det = mat[0][0] * ( mat[1][1] * mat[2][2]  -  mat[1][2] * mat[2][1] )
	// 	-  mat[0][1] * ( mat[1][0] * mat[2][2]  -  mat[1][2] * mat[2][0]  )
	// 	+  mat[0][2] * ( mat[1][0] * mat[2][1]  -  mat[2][0] * mat[1][1]  );

	int determinent = matrix[0][0] * ( matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
			- matrix[0][1] * ( matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
			+ matrix[0][2] * ( matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

	printf("Determinent of 3*3 matrix = %d\n", determinent);

	return 0;
}
