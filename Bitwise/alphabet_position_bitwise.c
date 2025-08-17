#include <stdio.h>

int main(void){
	char ch;
	printf("Enter alphabet : ");
	scanf("%c",  &ch);

	if( !(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z') ){
		printf("Wrong character entered.\n");
		return 0;
	}

	int position = ch & 31;

	printf("Position = %d\n", position);

	return 0;
}
