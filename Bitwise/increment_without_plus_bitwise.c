#include <stdio.h>

int addOne(int n){
	return -(~n);
}

int add_one(int n){
	int leftshift = 1;
	while(n & leftshift){
		n = n ^ leftshift;
		leftshift = leftshift << 1;
	}
	return n ^ leftshift;
}

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	
	printf("After increment : %d\n", addOne(n));
	printf("AFter increment : %d\n", add_one(n));

	return 0;
}
