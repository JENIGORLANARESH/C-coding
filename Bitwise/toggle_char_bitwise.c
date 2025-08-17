#include <stdio.h>

int main(void){
	char ch;
	printf("Enter char : ");
	scanf("%c", &ch);

	if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ){
		ch = ch ^ 32;
		printf("char ch = %c\n", ch);
	}
	else
		printf("Wrong character entry.\n");

	return 0;
}
