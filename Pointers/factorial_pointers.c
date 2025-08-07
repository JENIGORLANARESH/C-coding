#include <stdio.h>

int factorial(int *a){
	if(*a < 3)
		return *a;
	int fact = 1;
	while(*a > 1){
		fact = fact * (*a);
		(*a)--;
	}
	return fact;
}

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int a = factorial(&n);
	printf("Factorial = %d\n",  a); 
	return 0;
}
