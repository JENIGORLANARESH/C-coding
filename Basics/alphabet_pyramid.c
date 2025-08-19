#include <stdio.h>

int main(void){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d", &rows);

	for(int i=1; i<=rows; i++){
		char ch = 'A';
		for(int j=rows; j>i; j--){
			printf(" ");
		}

		for(int k=1; k<=i; k++){
			printf("%c", ch);
			ch++;
		}

		for(int l=1; l<i; l++){
			printf("%c", ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
