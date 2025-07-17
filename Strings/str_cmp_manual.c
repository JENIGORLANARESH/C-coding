#include <stdio.h>

int main(void){

	char str1[100], str2[100];
	printf("Enter str1 : ");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter str2 : ");
	fgets(str2, sizeof(str2), stdin);
	
	char *p1 = str1;
	char *p2 = str2;

	while(*p1 != '\0'){
		if(*p1 == '\n'){
			*p1 = '\0';
			break;
		}
		p1++;
	}

	while(*p2 != '\0'){
		if(*p2 == '\n'){
			*p2 = '\0';
			break;
		}
		p2++;
	}

	p1 = str1;
	p2 = str2;

	while(*p1 != '\0' && *p2 != '\0'){
		if(*p1 < *p2){
			printf("str1 < str2\n");
			return 0;
		}
		else if(*p1 > *p2){
			printf("str1 > str2\n");
			return 0;
		}
		p1++;
		p2++;
	} 
	
	if(*p1 == '\0' && *p2 == '\0')
		printf("str1 == str2\n");

	else if(*p1 == '\0')
		printf("str1 < str2\n");
	else printf("str1 > str2\n");

	return 0;
}
