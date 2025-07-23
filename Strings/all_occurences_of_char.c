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


	int occur = 1;
	printf("All occurences of word : ");
	for(int i=0; i<= slen - wlen; i++){
		int found = 1;
		for(int j=0; j<wlen; j++){
			if(str[i+j] != word[j]){
				found = 0;
				break;
			}
		}
		
		if(found){
			occur = 0;
			printf("%d ", i);
		}
	}

	if(occur){
		printf("None");
	}
	printf("\n");
	return 0;
}
