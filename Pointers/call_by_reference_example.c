#include <stdio.h>


void reference(int a, int b, int *sum, int *product, int *div){
	*sum = a +b;
	*product = a * b;
	*div = a/b;
}


int main(void){
	int a,b,sum,product,div;
	printf("Enter a , b : ");
	scanf("%d %d", &a, &b);
	reference(a,b, &sum, &product, &div);

	printf(" a = %d\n b = %d\n sum = %d\n product = %d\n div = %d\n", a, b, sum, product, div);
	return 0;
}
