#include <stdio.h>

int main(void){
	char str[100];
	int length = 0;

	printf("Enter string : ");
	//scanf("%s", str);
	fgets(str, sizeof(str), stdin);

	while(str[length] != '\n'){
		length++;
	}

	printf("Length : %d\n", length);
	return 0;
}


