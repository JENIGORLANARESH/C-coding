#include <stdio.h>

int main(void) {
    	double base, result = 1;
    	int exponent, i;

    	printf("Enter the base: ");
    	scanf("%lf", &base);

    	printf("Enter the exponent: ");
    	scanf("%d", &exponent);

    	if(exponent == 0) {
        	result = 1; 
    	} 
	else if(exponent > 0) {
        	for(i = 1; i <= exponent; i++) {
            		result *= base;
        	}
    	} 
	else { 
        	for(i = 1; i <= -exponent; i++) {
            		result *= base;
        	}
        	result = 1 / result;
    	}

    	printf("%.2lf raised to %d is: %.4lf\n", base, exponent, result);

    	return 0;
}

