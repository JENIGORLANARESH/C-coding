#include <stdio.h>

int setbit(int n, int k){
	int t = n | (1 << k);
	return t;
}

int binary(int n){
	int t = 1;
	int result = 0;
	while(n>0){
		int rem = n % 2;
		result = result + t * rem;
		n = n/2;
		t = t * 10;
	}
	return result;
}

int main(void){
	int n, k;
	printf("Enter n : ");
	scanf("%d", &n);
	printf("Enter ith bit k : ");
	scanf("%d", &k);
	printf("Before : %d\n", binary(n));
	printf("After : %d\n", binary(setbit(n,k)));

	return 0;
}


