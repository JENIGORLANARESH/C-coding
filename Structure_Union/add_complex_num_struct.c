#include <stdio.h>

struct Complex{
	float real;
	float imag;
};

struct Complex add(struct Complex num1, struct Complex num2){
	struct Complex result;
	result.real = num1.real + num2.real;
	result.imag = num1.imag + num2.imag;
	return result;
}

int main(void){
	struct Complex num1, num2, sum;

	printf("Enter real, imaginary for first num : ");
	scanf("%f %f", &num1.real, &num1.imag);
	printf("Enter real, imaginary for second num : ");
	scanf("%f %f", &num2.real, &num1.imag);

	sum = add(num1, num2);

	printf("sum = %.2f + %.2fi\n", sum.real, sum.imag);
	
	return 0;
}
