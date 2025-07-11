#include<stdio.h>
int isPalindrome(char str[]);

int main(void){
	char str[200];
	printf("Enter string : \n");
	fgets(str, sizeof(str), stdin);
	printf("%s\n", str);
	printf("%ld\n", sizeof(str));
	if(isPalindrome(str)) printf("Palindrome.\n");
	else printf("NOt a Palindrome.\n");
}

int isPalindrome(char str[]){
	int i=0, j= (int)(sizeof(str)-1);
	while(i<j){
		if(str[i] != str[j]) return 0;
		i++;
		j--;
	}	
	return 1;
}
