#include<stdio.h>

int main(void){
	float c;
	printf("Enter Celcius : \n");
	scanf("%f", &c);

	float f = (c * 9/5) + 32;

	printf("%.2f°C = %.2f°F\n", c,f);

	return 0;
}
