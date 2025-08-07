#include <stdio.h>

int add(int a, int b){
	return a + b;
}

int main(void){
	int a,b;
	printf("Enter a, b : ");
	scanf("%d %d", &a, &b);

	int (*sum)(int, int);
	sum = add;

	int c = sum(a,b);
	printf("a+b = %d\n", c);
	return 0;
}
