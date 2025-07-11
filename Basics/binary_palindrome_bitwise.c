#include <stdio.h>
int countBits(int n);
int palindrome(int n);

int main(void){
	int n;
	printf("Enter n : \n");
	scanf("%d", &n);
	if(palindrome(n)){
		printf("%d is a Palindrome in Binary.\n", n);
	}
	else{
		printf("%d is Not a Palindrome in Binary.\n", n);
	}
	return 0;
}

int countBits(int n){
	int count=0;
	while(n>0){
		count++;
		n = n>>1;
	}
	return count;
}

int palindrome(int n){
	int left = countBits(n) - 1;
	int right = 0;
	while(left > right){
		if( ((n>>left)&1) != ((n>>right)&1) ){
			return 0;
		}
		left--;
		right++;
	}
	return 1;
}
