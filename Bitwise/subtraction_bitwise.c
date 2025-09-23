#include <stdio.h>

int sub(int a, int b){
	return a + (~b+1);
}

int main(void){
	int a,b;
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);
	printf("%d - %d = %d\n", a, b, sub(a,b));
	return 0;
}
