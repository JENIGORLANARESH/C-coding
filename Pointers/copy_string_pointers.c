#include <stdio.h>


void strcopy(char *str, char *copy){
	char *p = str;
	char *q = copy;
	while(*p){
		*q = *p;
		q++;
		p++;
	}
	*q = '\0';
}

int main(void){
	char str[100];
	char copy[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	char *p = str;
	while(*p != '\n'){
		p++;
	}
	*p = '\0';

	strcopy(str, copy);

	printf("copy = %s\n", copy);

	return 0;
}
