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

	int count = 0;
	int slen = strlen(str);
	int wlen = strlen(word);

	for(int i=0; i<= slen - wlen; ){
		int found = 1;
		for(int j=0; j<wlen; j++){
			if(str[i+j] != word[j]){
				found = 0;
				break;
			}
		}
		if(found){
			count++;
			i = i + wlen;
		}else{
			i++;
		}
	}

	printf("Number of occurences of word in string : %d\n", count);

	return 0;
}
