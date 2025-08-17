#include <stdio.h>
#include <stdlib.h>

long long divide(long long a, long long b){
	long long quotient = 0;
	int sign = ((a < 0) ^ (b < 0)) ? -1 : 1;
	
	a = abs(a);
	b = abs(b);

	while(a >= b){
		a = a - b;
		quotient++;
	}
	return quotient * sign;
}

int main(void){
	long long a,b;
	printf("Enter a(Dividend) : ");
	scanf("%lld", &a);
	printf("Enter b(Divisor) : ");
	scanf("%lld", &b);
	if(b == 0){
		printf("Divisor cannot be zero\n");
		return 0;
	}	
	printf("Quotient = %lld\n", divide(a,b));
	return 0;
}
