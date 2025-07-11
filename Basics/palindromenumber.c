#include<stdio.h>

void ispali(int a);

int main(void){
	int n;
	printf("Enter a num : ");
	scanf("%d", &n);
	ispali(n);
	return 0;
}

void ispali(int a){
	int n = a;
	int rev = 0;
	while(a > 0){
		int d = a % 10;
		rev = rev * 10 + d;
		a = a/10;
	}
	if(rev == n){
		printf("%d is palindrome\n", n);
	}
	else printf("%d is not a palindrome\n", n);
}
