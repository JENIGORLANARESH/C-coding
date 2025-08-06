#include <stdio.h>
#include <string.h>

int strlength(const char *str){
	const char *ptr = str;
	while(*ptr != '\0'){
		ptr++;
	}
	return ptr - str;
}

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int len = strlength(str);
	printf("strlen = %d\n", len);
	return 0;
}
