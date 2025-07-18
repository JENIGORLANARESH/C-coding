#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	char replace;
	printf("Enter replacement character : ");
	scanf("%c", &replace);

	for(int i=0; str[i] != '\0'; i++){
		if(str[i] == ' '){
			str[i] = replace;
		}
	}

	printf("After replacement : %s\n", str);

	return 0;
}
