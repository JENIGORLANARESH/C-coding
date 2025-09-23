#include <stdio.h>

int add(int a, int b){
	while(b != 0){
		unsigned int carry = a & b;
		a = a ^ b;
		b = carry << 1;
	}
	return a;
}

int main(void){
	int a,b;
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);
	printf("%d + %d = %d\n", a, b, add(a,b));
	return 0;
}
