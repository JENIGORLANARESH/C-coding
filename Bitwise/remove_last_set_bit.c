#include <stdio.h>

int remove_last_bit(unsigned int n){
	return n & (n-1);
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
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	printf("Before : %d\n", binary(n));
	printf("After : %d\n", binary(remove_last_bit(n)));

	return 0;
}


