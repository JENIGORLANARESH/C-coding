#include <stdio.h>

void oppositeSign(int a, int b){
	int temp = a ^ b;
	if(temp < 0)
		printf("Opposite sign.\n");
	else
		printf("Same sign\n");
}

int main(void){
	int a,b;
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);
	oppositeSign(a,b);
	return 0;
}
