#include <stdio.h>

union input{
	int a;
	float b;
};

int main(){
	int a,b;
	printf("Enter a , b : ");
	scanf("%d %d", &a, &b);

	union input temp;
	temp.a = a;
	printf("temp.a = %d\n", temp.a);
	temp.b = b;
	printf("temp.b = %f\n", temp.b);

	return 0;
}
