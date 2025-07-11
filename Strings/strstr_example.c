#include <stdio.h>
#include <string.h>

// char *strstr(str1, str2)  -->  It return pointer to the first occurence of the substring in the another string.

int main(void){
	char a[100], b[100];
	printf("Enter a and b strings : \n");
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);
	a[strcspn(a, "\n")] = '\0';
	b[strcspn(b, "\n")] = '\0';

	char *p = strstr(a, b);
	if(p == NULL) printf("No substring found\n");
	else printf("%s\n", p);

	return 0;
}
