#include <stdio.h>

void turn180(int row, int col, int arr[][col]);

int main(void){
	int x, y, temp = 1;
	printf("Enter number of rows and columns : ");
	scanf("%d %d", &x, &y);
	int arr[x][y];
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			arr[i][j] = temp++;
		}
	}
	
	printf("After 180 degrees : \n");
	turn180(x, y, arr);
	
	//diaplay
	
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void turn180(int row, int col, int arr[row][col]){

	int temp[row][col];

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			temp[row-1-i][col-1-j] = arr[i][j];
		}
	}

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			arr[i][j] = temp[i][j];
		}
	}

}



