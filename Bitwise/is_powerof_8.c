#include<stdio.h>
int power(int n);
int count(int n);

int main(void){
	int n;
	printf("Enter n : \n");
	scanf("%d", &n);
	if(power(n)) printf("%d is power of 8\n", n);
	else printf("%d is Not power of 8\n", n);
	return 0;
}

int power(int n){
	return (n>0) &&
		( (n&(n-1))==0) &&
		( ((count(n)-1)%3) == 0);
}

int count(int n){
	int c = 0;
	while(n>0){
		c++;
		n = n>>1;
	}
	return c;
}
