#include <stdio.h>

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);

	if(n % 4 == 0){
		printf("xor : 1 to %d = %d\n", n, n);
	}
	else if(n % 4 == 1){
		printf("xor : 1 to %d = %d\n", n , 1);
	}
	else if(n % 4 == 2)
		printf("xor : 1 to %d = %d\n", n, n + 1);
	else if(n % 4 == 3)
		printf("xor : 1 to %d = %d\n", n, 0);

	return 0;
}
