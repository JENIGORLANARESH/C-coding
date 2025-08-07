#include <stdio.h>


int str_compare(char *a, char *b){
	while( *a && *b ){
		if(*a > *b)
			return 1;
		if(*a < *b)
			return -1;
		a++;
		b++;
	}
	if(*a == '\0' && *b == '\0')
		return 0;
	if(*a != '\0')
		return 1;
	if(*b != '\0')
		return -1;
	return 0;
}


int main(void){
	char a[100];
	char b[100];
	printf("Enter a : ");
	fgets(a, sizeof(a), stdin);
	printf("Enter b : ");
	fgets(b , sizeof(b), stdin);

	char *p = a;
	while(*p != '\n')
		p++;
	*p = '\0';
	p = b;
	while(*p != '\n')
		p++;
	*p = '\0';

	int temp = str_compare(a, b);
	
	if(temp > 0)
		printf("a > b\n");
	else if( temp == 0)
		printf("a == b\n");
	else
		printf("a < b\n");

	return 0;
}
