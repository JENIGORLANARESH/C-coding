#include <stdio.h>
#include <string.h>


int replaceWord(char *str, char *word, char *new){
	int temp = 0;
	for(int i=0; str[i]; i++){
		int found = 1;
		int j=0;
		while(word[j]){
			if(word[j] != str[i+j]){
				found = 0;
				break;
			}
			j++;
		}
		if(found){
			temp = 1;
			for(int k=0; k<strlen(new); k++){
				str[i+k] = new[k];
			}
			i = i + strlen(new) - 1;
		}
	}
	
	return temp;
}


int main(void){
	char str[1000];
	char word[50];
	char new[50];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter word to be replaced: ");
	fgets(word, sizeof(word), stdin);
	word[strcspn(word, "\n")] = '\0';
	printf("Enter new word : ");
	fgets(new, sizeof(new), stdin);
	new[strcspn(new, "\n")] = '\0';

	if(strlen(word) != strlen(new)){
		printf("Length of new word and old word is not same.\n");
		return 0;
	}

	int n = replaceWord(str, word, new);
	
	if(n)
		printf("%s\n", str);
	else
		printf("Word Not found in string.\n");



	return 0;
}
