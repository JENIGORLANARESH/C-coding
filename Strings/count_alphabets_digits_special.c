#include <stdio.h>
#include <string.h>

int main(void){
	int alpha = 0, digit = 0, special = 0;
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int i=0;
	while(str[i] != '\0'){
		char ch = str[i];
		if( (ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)){
			alpha++;
		}
		else if( ch >= 48 && ch <=57){
			digit++;
		}
		else special++;

		i++;
	}

	printf("Alphabets : %d\n", alpha);
	printf("Digits : %d\n", digit);
	printf("Special : %d\n", special);

	return 0;
}
