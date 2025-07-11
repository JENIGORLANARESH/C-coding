#include <stdio.h>
#include <string.h>

void delete_occurences_of_char(char str[], char ch);

int main(void){
	char str[200], ch;
	printf("Enter str : \n");
	fgets(str, 200, stdin);
	printf("Enter character to be deleted from the string : ");
	scanf("%c", &ch);
	delete_occurences_of_char(str, ch);
	printf("%s\n", str);

	return 0;
}

void delete_occurences_of_char(char str[], char ch){
	int i=0;
	int j=0;
	int l = strlen(str);
	while(j < l-1){
		if( str[j] != ch ){
			str[i] = str[j];
			i++;
		}
		j++;
	}
	str[i] = '\0';
}

