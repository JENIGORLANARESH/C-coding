#include <stdio.h>

int clearithbit(int n, int k){
	return n & ~(1<<k);
}

int binary(int n){
	int temp = 1;
	int result = 0;
	while(n>0){
		int rem = n % 2;
		result = result + temp * rem;
		n = n/2;
		temp = temp * 10;
	}
	return result;
}

int main(void){
	int n, k;
	printf("Enter n : ");
	scanf("%d", &n);
	printf("Enter k : ");
	scanf("%d", &k);
	printf("Before : %d\n", binary(n));
	printf("After : %d\n", binary(clearithbit(n,k)));
	return 0;
}
