#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ispalindrome(char *str, int start, int end){
	if(start >= end)
		return 1;

	char s = str[start];
	char e = str[end];
	if(!isalnum(s))
		return ispalindrome(str, start+1, end);
	if(!isalnum(e))
		return ispalindrome(str, start, end-1);

	if( tolower(s) != tolower(e)){
		return 0;
	}
	return ispalindrome(str, start+1, end-1);
}


int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	if(ispalindrome(str, 0, strlen(str)-1)){
		printf("Is Palindrome\n");
	}
	else
		printf("Not a palindrome\n");
	return 0;
}
