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

	int slen = strlen(str);	
	int wordlen = strlen(word);

	for(int i=0; i<= slen - wordlen; i++){
		int found = 1;
		for(int j=0; j<wordlen; j++){
			if(str[i+j] != word[j]){
				found = 0;
				break;
			}
		}
		
		if(found){
			printf("First occurence at index %d\n", i);
			return 0;
		}
	}

	printf("Word not present in string.\n");
	return 0;
}
