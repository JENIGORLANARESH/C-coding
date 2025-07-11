#include<stdio.h>
int product(int a);

int main(void){
	int n;
	printf("Enter a num : ");
	scanf("%d", &n);
	printf("Product of digits in %d is %d \n", n, product(n));
	return 0;
}

int product(int a){
	int p = 1;
	while(a > 1){
		int d = a % 10;
		p = p * d;
		a = a/10;
	}
	return p;
}
