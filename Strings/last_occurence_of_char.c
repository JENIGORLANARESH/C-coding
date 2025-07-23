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
	int wlen = strlen(word);

	int lastindex = -1;
	for(int i=0; i<= slen - wlen; i++){
		int found = 1;
		for(int j=0; j<wlen; j++){
			if(str[i+j] != word[j]){
				found = 0;
				break;
			}
		}
		if(found && i > lastindex){
			lastindex = i;
		}
	}

	if(lastindex >=0){
		printf("Last occurence of word at index : %d\n", lastindex);
	}
	else{
		printf("Word Not found in string.\n");
	}

	return 0;
}
