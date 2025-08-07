#include <stdio.h>

int main(void){
	int a = 10, b=20, c=30;
	int *array[3];
	array[0] = &a;
	array[1] = &b;
	array[2] = &c;

	printf("array : ");
	for(int i=0; i<3; i++){
		printf("%d ", *array[i]);
	}
	printf("\n");
	return 0;
}
