#include <stdio.h>

#define check(n,i) \
	if( n&(1<<i) ) \
	printf("Set\n"); \
	else printf("Not Set\n");

int main(void){
	int n,i;
	printf("Enter n : \n");
	scanf("%d", &n);
	printf("Enter ith bit i : \n");
	scanf("%d", &i);
	check(n,i);
	return 0;
}
