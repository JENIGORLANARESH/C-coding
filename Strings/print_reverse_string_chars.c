#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	for(int i=len-2; i>=0; i--){
		printf("Char at index %d : %c\n", i, str[i]);
	}
	return 0;
}
