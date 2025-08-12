#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int match(char *line, char *str){
	int llen = strlen(line);
	int slen = strlen(str);
	for(int i=0; i <= (llen-slen); i++){
		int found = 1;
		for(int j=0; j<slen; j++){
			if(str[j] != line[i+j]){
				found = 0;
				break;
			}
		}
		if(found)
			return 1;
	}
	return 0;
}

int main(void){
	char str[1000];
	char file[100];
	char line[1024];
	FILE *fp;
	int number = 1;

	printf("Enter file name : ");
	scanf("%s", file);
	fp = fopen(file, "r");
	if(fp == NULL){
		perror("Error in opening file");
		return EXIT_FAILURE;
	}
	getchar();
	printf("Enter string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int found = 0;
	while( fgets(line, sizeof(line), fp) != NULL){
		
		if(strstr(line, str) != NULL){
			found = 1;
			printf("Line Number : %d\n", number);
		}
		/*
		if(match(line, str)){
			found = 1;
			printf("Line Number : %d\n", number);
		}*/

		number++;
	}

	if(!found){
		printf("String not found in any line.\n");
	}

	fclose(fp);
	return 0;
}
