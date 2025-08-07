#include <stdio.h>

int add(int a, int b){
	return a + b;
}

int sub(int a , int b){
	return a - b;
}

int operation(int a, int b, int (*fp)(int , int) ){
	int result = fp(a,b);
	return result;
}

int main(void){
	int a,b;
	printf("Enter a , b  : ");
	scanf("%d %d", &a, &b);

	int p = operation(a, b, add);
	//int q = operation(a, b, sub);
	int q = operation(a, b, &sub);		// sub or &sub

	printf("a + b = %d\n", p);
	printf("a - b = %d\n", q);
	return 0;
}
