#include <stdio.h>
#include <string.h>

int isvowel(char ch){
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
		|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int countVowels(char *str){
	if(*str == '\0')
		return 0;
	char ch = *str;
	str++;
	return isvowel(ch) + countVowels(str);
}


int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	printf("Number of vowels = %d\n" , countVowels(str));
	return 0;
}
