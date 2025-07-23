#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	char word[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter word : ");
	scanf("%s", word);

	int index = -1;
	int slen = strlen(str);
	int wlen = strlen(word);

	for(int i=0; i<= slen - wlen; i++){
		int found = 1;
		for(int j=0; j<wlen; j++){
			if(str[i+j] != word[j]){
				found = 0;
				break;
			}
		}
		
		if(found && index < i){
			index = i;
		}
	}

	if(index == -1){
		printf("Word Not found in string.\n");
		return 0;
	}
	for(int i=index; i<= slen - wlen; i++){
		str[i] = str[i+wlen];
	}
	str[slen-wlen] = '\0';

	printf("After removing last occurence of word : %s\n", str);
	return 0;
}
