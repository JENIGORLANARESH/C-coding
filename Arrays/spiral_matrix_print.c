#include <stdio.h>

int main(void){
	int row, col;
	printf("Enter row & col " );
	scanf("%d %d", &row, &col);
	int arr[row][col];
	printf("Enter elements : \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	int top, bottom, left, right;
	top = 0;
	bottom = row-1;
	left = 0;
	right = col - 1;
	
	printf("Spiral : \n");
	while(top <= bottom){
	
		//top row
		for(int i = left; i<= right; i++){
			printf("%d ", arr[top][i]);
		} 
		top++;

		// right col
		for(int i = top; i<=bottom; i++){
			printf("%d ", arr[i][right]);
		}
		right--;
		
		// bottom row
		if(top <= bottom){
			for(int i = right; i>=left; i--){
				printf("%d ", arr[bottom][i]);
			}
			bottom--;
		}

		// left col
		if(left <= right){
			for(int i=bottom; i>=top; i--){
				printf("%d ", arr[i][left]);
			}
			left++;
		}
	
	}

	printf("\n");
	return 0;
}
