#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_delimeter(char ch){
	switch(ch){
		case ' ' :
		case '\t':
		case '\n':
		case ',':
		case '.':
		case ';':
		case ':':
		case '-':
		case '(':
		case ')':
		case '"':
			return 1;
	}
	return 0;
}

int main(void){
	FILE *fp;
	char filename[50];
	int words = 0;
	int inword = 0;
	int ch;

	printf("Enter filename : ");
	scanf("%s", filename);

	fp = fopen(filename, "r");
	if(fp == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}

	while( (ch = fgetc(fp)) != EOF){
		if(is_delimeter(ch)){
			if(inword){
				words++;
				inword = 0;
			}
		}
		else{
			inword = 1;
		}
	}

	if(inword)
		words++;

	printf("No of words in the file = %d\n", words);

	fclose(fp);
	
	return 0;
}
