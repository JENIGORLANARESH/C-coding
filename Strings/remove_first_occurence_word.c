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
	
	int firstindex = -1;
	for(int i=0; i<= slen - wlen; i++){
		int found = 1;
		for(int j=0; j<wlen; j++){
			if(str[i+j] != word[j]){
				found = 0;
				break;
			}
		}
		if(found){
			firstindex = i;
			break;
		}
	}

	if(firstindex == -1){
		printf("Word Not present in string.\n");
		return 0;
	}
	
	int i = firstindex;
	for( ; i<=slen-wlen; i++){
		str[i] = str[i+wlen];
	}
	str[i] = '\0';
	
	printf("After removing first occrence : %s\n", str);
	
	return 0;
}
