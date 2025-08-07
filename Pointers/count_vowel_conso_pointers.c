#include <stdio.h>

void countVowelsConsonents(char *str, int *V, int *C){
	while(*str){
		char c = *str;
		if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'O' || c == 'I' || c == 'U'){
			(*V)++;
		}
		else if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
			(*C)++;
		str++;
	}
}

int main(void){
	char str[100];
	int vowels = 0, consonents = 0;
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	char *p = str;
	while(*p != '\n')
		p++;
	*p = '\0';

	countVowelsConsonents(str, &vowels, &consonents);

	printf("Vowels = %d\n", vowels);
	printf("Consonents = %d\n", consonents);

	return 0;
}
