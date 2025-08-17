#include <stdio.h>

int xor_1_n(int n){
	if(n % 4 == 0)
		return n;
	else if(n % 4 == 1)
		return 1;
	else if(n % 4 == 2)
		return n+1;
	else if(n % 4 == 3)
		return 0;
	return 0;
}

int main(void){
	int left,right;
	printf("Enter left and right : ");
	scanf("%d %d", &left, &right);

	int result = xor_1_n(left-1) ^ xor_1_n(right);
	
	printf("XOR from %d to %d = %d\n", left, right, result);
	return 0;
}
