#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char str[50];
	printf("Enter file name : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	FILE *fp = fopen(str, "r");
	if(fp == NULL){
		perror("Error:");
		exit(EXIT_FAILURE);
	}	

	char line[1024];  // max length of a line

	int count = 1;
	while( fgets(line, sizeof(line), fp) != NULL){
		printf("Line NO: %d : %s", count , line);
		count++;		
	}
	

	fclose(fp);

	return 0;
}
