#include <stdio.h>
#include <string.h>

void strcat_pointer(char *str, char *str1, char *str2){
	char *p = str;
	while(*str1){
		*p = *str1;
		str1++;
		p++;
	}
	while(*str2){
		*p = *str2;
		p++;
		str2++;
	}
	*p = '\0';
}

int main(void){
	char str1[100];
	char str2[100];
	char str[200];
	printf("Enter str1 : ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	printf("Enter str2 : ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';

	strcat_pointer(str, str1, str2);

	printf("%s\n", str);
	return 0;
}
