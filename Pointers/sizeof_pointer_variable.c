#include <stdio.h>

int main(void){
	int a = 10;
	char b = 'A';
	int *pint = &a;
	char *pchar = &b;
	printf("*pint = %d\n", *pint);
	printf("Size of pointer pint = %zu\n", sizeof(pint));
	printf("Size of datatype pointer pint points to = %zu\n", sizeof(*pint));
	printf("*pchar = %c\n", *pchar);
	printf("Size of pointer pchar = %zu\n", sizeof(pchar));
	printf("Size of datatype pointer pchar points to = %zu\n", sizeof(*pchar));
	return 0;
}
