#include <stdio.h>
#include <string.h>

int strToNum(char *str, int n){
	if(n == 1)
		return str[0] - '0';

	return (str[n-1] - '0') + strToNum( str, n-1) *10 ;
}


int main(void){
	char str[20];
	printf("Enter string number : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	int len = strlen(str);

	int n = strToNum(str, len);
	printf("Number = %d\n", n);
	return 0;
}
