#include <stdio.h>

int getMin(int a, int b){
	int diff = a - b;
	int k = (diff >> 31) & 1;	// 1 if a<b else 0
	return b + k*diff;
}

int getMax(int a, int b){
	int diff = a - b;
	int k = (diff >> 31) & 1;	// 1 if a < b else 0
	return a - k*diff;
}

int main(void){
	int a,b;
	printf("Enter a , b : ");
	scanf("%d %d" , &a, &b);

	printf("Minimum = %d\n", getMin(a,b));
	printf("Maximum = %d\n", getMax(a,b));
	return 0;
}
