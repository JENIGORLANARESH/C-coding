#include <stdio.h>
#include <string.h>
#include <ctype.h>

void abbreviation(char *str){
	int i=0;
	if(isalpha(str[0]))
		str[i++] = toupper(str[0]);

	for(int j=1; str[j]; j++){
		if( str[j-1] == ' ' && isalpha(str[j]) ){
			str[i] = toupper(str[j]);
			i++;
		}
	}
	str[i] = '\0';
}

int main(void){
	char str[100];
	printf("Enter text : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	abbreviation(str);
	
	printf("%s\n", str);
	return 0;
}
