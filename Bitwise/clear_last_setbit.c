#include<stdio.h>
int dectobinary(int n);

int main(void){
	int n;
	printf("Enter a number : \n");
	scanf("%d", &n);
	printf("Entered binary Number : %d\n", dectobinary(n));
	n = n & (n-1);

	printf("Result after clearing last set bit : %d\n", dectobinary(n));

	return 0;
}

int dectobinary(int n){
	int bin = 0, t=1;
	while(n > 0){
		int d = n % 2;
		bin = bin + d*t;
		n = n/2;
		t = t * 10;
	}

	return bin;
}
