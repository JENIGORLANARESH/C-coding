#include <stdio.h>

void reverse(char *str, char *start, char *end){
	while(start < end){
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}


int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);

	char *p = str;
	while(*p != '\n'){
		p++;
	}
	*p = '\0';
	p--;
	char *s = str;
	reverse(str, s , p);
	
	printf("%s\n", str);

	return 0;
}
