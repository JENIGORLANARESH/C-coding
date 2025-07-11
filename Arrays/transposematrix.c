#include <stdio.h>
void print(int a, int b, int matrix[a][b]);

int main(void){
	int mat[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
		};

	print(3,3,mat);

	for(int i=0; i<3; i++){
		for(int j=i + 1; j<3; j++){
			int temp = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = temp;
		}
	}

	print(3,3,mat);

	return 0;
}


void print(int a, int b, int matrix[a][b]){
        for(int i=0; i<a; i++){
                for(int j=0; j<b; j++){
                        printf("%d ", matrix[i][j]);
                }
                printf("\n");
        }
}
