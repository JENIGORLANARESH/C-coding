#include <stdio.h>

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);

	int mask = n - 1;

	if(n & (n-1)){
		printf("%d is Not power of 2\n", n);
	}
	else{
		printf("%d is power of 2.\n", n);
	}

	return 0;
}
