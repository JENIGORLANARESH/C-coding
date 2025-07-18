#include <stdio.h>

int main(void){
	char ch;
	printf("Enter character : ");
	scanf("%c", &ch);

	if(  (ch >= '0' && ch <= '9') ||
		       	(ch >= 'a' && ch <= 'f') || 
			(ch >= 'A' && ch <= 'F') )
	{
		printf("%c is Hexadecimal digit.\n", ch);
	}
	else{
		printf("%c is Not Hexadecimal digit.\n", ch);
	}

	return 0;
}
