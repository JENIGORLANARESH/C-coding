#include <stdio.h>

int main(void){
	int a, b;
	printf("Enter a , b : ");
	scanf("%d %d", &a, &b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a = %d b = %d\n", a, b);

	return 0;
}
