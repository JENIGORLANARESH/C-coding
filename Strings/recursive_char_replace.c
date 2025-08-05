#include <stdio.h>
#include <string.h>


void replaceChar(char *str, char ch, char new){
	if(*str == '\0')
		return;
	if(*str == ch){
		*str = new;
	}
	str++;
	replaceChar(str, ch, new);
}

int main(void){
	char str[1000];
	char ch;
	char new;
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter char to be replace : ");
	scanf("%c", &ch);
	getchar();
	printf("Enter new char : ");
	scanf("%c", &new);

	replaceChar(str, ch, new);

	printf("%s\n", str);

	return 0;
}
