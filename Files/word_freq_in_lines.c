#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Each line should have only 80 char(includdin '\n').

int main(void){
	FILE *fp;
	char line[81];
	int words = 0;
	int total = 0;
	char filename[50];
	char word[50];
	int lineNum = 1;
	printf("Enter filename : ");
	scanf("%s", filename);

	fp = fopen(filename, "r");
	if(fp == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}
	
	printf("Enter word : ");
	scanf("%s", word);
	int wlen = strlen(word);

	while( fgets(line, 81, fp) != NULL){
		words = 0;
		for( int i=0; i<= (81-wlen); ){
			int found = 1;
			int j=0;
			while(j < wlen){
				if(line[i+j] != word[j]){
					found = 0;
					break;
				}
				j++;
			}
			if(found){
				words++;
				total++;
				i = i + wlen;
			}
			else{
				i++;
			}
		}	

		printf("Line %d : %s", lineNum, line);
		lineNum++;
		printf("word = %d\n", words);
	}

	printf("Total = %d\n", total);

	fclose(fp);

	return 0;
}
