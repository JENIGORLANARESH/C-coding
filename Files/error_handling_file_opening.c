#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

int main(void){
	char file[50];
	printf("Enter file name : ");
	fgets(file, sizeof(file), stdin);
	file[strcspn(file,"\n")] = '\0';
	
	FILE *fp = fopen(file, "r");
	if(fp == NULL){
		printf("Error: Could not open file %s\n", file);
		printf("Reason: %s\n", strerror(errno));
		perror("perror output:");
		exit(EXIT_FAILURE);
	}
	
	printf("File opened successfully.\n");

	fclose(fp);

	return 0;
}
