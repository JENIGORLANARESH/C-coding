#include <stdio.h>

void display(int n){
	int num = n;
	int result = 0;
	int temp = 1;
	while(n > 0){
		int digit = n % 2;
		result = result + temp * digit;
		n = n/2;
		temp = temp * 10;
	}
	printf("Binary of %d = %d\n", num, result);
}

int toggle_range(int n, int left, int right){
	int right_mask = (1<<(right+1))-1;
	int left_mask = (1<<left)-1;
	int mask = right_mask ^ left_mask;
	int result = n ^ mask;
	return result;
}

int main(void){
	int n,left,right;
	printf("Enter number : ");
	scanf("%d", &n);
	printf("Enter range left , right : ");
	scanf("%d %d", &left, &right);
	
	display(n);

	n = toggle_range(n, left, right);

	display(n);
	return 0;
}
