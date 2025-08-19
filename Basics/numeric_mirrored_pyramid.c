#include <stdio.h>

int main(void){
	int rows;
	printf("Enter rows : ");
	scanf("%d", &rows);

	for(int i=1; i<=rows; i++){
		for(int j=rows; j>i; j--){
			printf(" ");
		}
		for(int k=1; k<=i; k++){
			printf("%d", k);
		}
		printf("\n");
	}

	return 0;
}
