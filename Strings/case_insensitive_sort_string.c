#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sortCaseInsensitive(char *str){
	int len = strlen(str);

	for(int i=0; i<len; i++){
		for(int j=i; j<len; j++){
			if(tolower(str[i]) > tolower(str[j])){
				char ch = str[i];
				str[i] = str[j];
				str[j] = ch;
			}
		}
	}
}

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	sortCaseInsensitive(str);
	printf("%s\n", str);
	return 0;
}
