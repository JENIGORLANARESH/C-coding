#include <stdio.h>

int main(void){
	int rows;
	printf("Enter rows : ");
	scanf("%d", &rows);

	for(int i=1; i<=rows; i++){
		for(int j=rows; j>i; j--){
			printf("  ");
		}
		int k=1;
		for( ; k<= (2*i-1); k++){
			printf("%d ", k);
		}
		printf("\n");
	}

	return 0;
}
