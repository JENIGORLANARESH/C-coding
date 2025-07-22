#include <stdio.h>
#include <string.h>

// strtok: start tokenizing the input string using space as delimiter
// Use NULL in strtok to continue tokenizing the same string from the last position


int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	char *word = strtok(str, " ");

	while(word != NULL){
		printf("%s\n", word);
		word = strtok(NULL, " ");
	}

	return 0;
}
