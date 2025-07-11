#include<stdio.h>

int swap(int n);
int countbits(int n);

int main(void){
	int n;
	printf("Enter N : \n");
	scanf("%d", &n);
	printf("After swaping fist and last N = %d\n", swap(n));
	return 0;
}

int swap(int n){
	int count = countbits(n);
	int a = count -1;
	int b = 0;
	int first = (n>>a)&1;
	int last = (n>>b)&1;
	if(first != last){
		n = n ^ (1<<a);
		n = n ^ (1<<b);
	}
	return n;
}

int countbits(int n){
	int c=0;
	while(n>0){
		c++;
		n = n>>1;
	}
	return c;
}
