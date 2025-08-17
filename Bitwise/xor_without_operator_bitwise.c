#include <stdio.h>

int xor(int a, int b){
	return (a & ~b) | (b & ~a);
}

int main(void){
	int a,b;
	printf("Enter a , b ");
	scanf("%d %d", &a, &b);
	
	printf("xor of %d and %d = %d\n", a, b, xor(a,b));
	return 0;
}
