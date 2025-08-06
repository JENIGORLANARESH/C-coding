#include <stdio.h>

int main(void){
	int a , b;
	printf("Enter a , b : ");
	scanf("%d %d", &a, &b);
	int *pa = &a;
	int *pb = &b;

	int temp = *pa;
	*pa = *pb;
	*pb = temp;

	printf("*pa  = %d\n", *pa);
	printf("*pb = %d\n", *pb);
	return 0;
}
