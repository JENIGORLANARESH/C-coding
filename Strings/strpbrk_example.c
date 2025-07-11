#include <stdio.h>
#include <string.h>

// strpbrk = return a pointer to first character of str1 , which matches with any character from str2 

int main(void){
	char a[100], b[100];
	printf("Enter a and b : \n");
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);

	char *p;
	p = strpbrk(a,b);

	printf("%s\n", p);

	return 0;
}
