#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(void){
	FILE *fp;
	char str[50];
	printf("Enter file name : ");
	scanf("%99s", str);
	fp = fopen(str, "r");
	if(fp == NULL){
		fprintf(stderr, "Error in opening file '%s': %s\n", str, strerror(errno));

		if(errno == ENOENT){
			printf("File does not exist. Creating new file....\n");
			fp = fopen(str, "w");
			if(fp == NULL){
				fprintf(stderr, "Error in creating file '%s': %s\n", str, strerror(errno));
				return EXIT_FAILURE;
			}
			printf("File '%s' created successfully \n", str);
		}
		else{
			return EXIT_FAILURE;
		}
	}

	if(fp != NULL){
		printf("File '%s' opened successfully.\n", str);
		fclose(fp);
	}

	return 0;
}
