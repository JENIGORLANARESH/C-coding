#include<stdio.h>
int count(int n);

int main(void){
	int a,b;
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);
	int sum = a + b;
	printf("Set in sum = %d\n", count(sum));
	return 0;
}

int count(int n){
	int c = 0;
	while(n>0){
		c++;
		n = n & (n-1);
	}
	return c;
}
