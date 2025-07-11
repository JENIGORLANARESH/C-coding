#include<stdio.h>
int check(int n);

int main(void){
	int n;
	printf("Enter n : \n");
	scanf("%d", &n);
	if(check(n)) printf("%d is power of 4.\n", n);
	else printf("%d is NOt power of 4.\n", n);
	return 0;
}

int check(int n){
	return (n>0) &&
		((n & (n-1)) == 0) &&
		(n & 0x55555555);
}

