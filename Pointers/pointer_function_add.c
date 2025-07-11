#include <stdio.h>
#include <stdlib.h>

float add(int, float);

int main(void){

	int a;
	float b;

	float (*padd)(int, float);

	printf("Enter a and b : ");
	scanf("%d %f", &a, &b);

	padd = add;

	float result = padd(a, b);
	float result2 = (*padd)(a, b);
	
	printf("a + b = %.2f\n", result);

	return 0;
}

float add(int a, float b){
	return a+b;
}
