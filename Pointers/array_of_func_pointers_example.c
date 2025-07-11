#include <stdio.h>
#include <stdlib.h>

float add(float, int);
float sub(float, int);
float mul(float, int);
float divi(float, int);

int main(void){
	float a;
	int b;
	
	float (*fp[4])(float, int);
	fp[0] = add;
	fp[1] = sub;
	fp[2] = mul;
	fp[3] = divi;

	char *operation[] = {"Add", "Sub", "Mul", "Divi"};

	printf("Enter a, b : ");
	scanf("%f %d", &a, &b);

	for(int i=0; i<4; i++){
		printf("%s : %.2f\n", operation[i], (*fp[i])(a,b)  );
	}

	printf("\n");
	return 0;
}

float add(float a, int b){
	return a+b;
}

float sub(float a, int b){
	return a-b;
}

float mul(float a, int b){
	return a*b;
}

float divi(float a, int b){
	return a/b;
}
