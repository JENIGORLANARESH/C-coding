#include<stdio.h>
int count(int n);

int main(void){
	int n;
	printf("Enter a num : \n");
	scanf("%d", &n);
	printf("Number of set bit in %d = %d\n", n, count(n));
	return 0;
}

int count(int n){
	int temp = 0;
	while(n>0){
		int t = n % 2;
		if(t == 1) temp++;
		n = n/2;
	}
	return temp;
}
