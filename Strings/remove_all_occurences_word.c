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

	int foundany = 0;
	int i=0,j=0;
	while(i <= slen - wlen){
		int found = 1;
		for(int k=0; k<wlen; k++){
			if(str[i+k] != word[k]){
				found = 0;
				break;
			}
		}
		if(found){
			foundany = 1;
			i = i + wlen;
		}
		else{
			str[j] = str[i];
			j++;
			i++;
		}
	}

	while (str[i] != '\0') {
        	str[j++] = str[i++];
    	}

	str[j] = '\0';

	if(foundany){
		printf("After removing : %s\n", str);
	}
	else{
		printf("Word not found in str.\n");
	}
	
	return 0;
}
