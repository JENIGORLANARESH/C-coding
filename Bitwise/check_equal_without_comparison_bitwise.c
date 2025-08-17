#include <stdio.h>

int main(void){
	int a,b;
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);

	if(a ^ b)
		printf("Both are Not Equal.\n");
	else
		printf("Both are Equal.\n");
	return 0;
}
