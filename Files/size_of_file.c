#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	char str[100];
	long filesize;
	printf("Enter file name : ");
	scanf("%99s", str);
	fp = fopen(str, "r");
	if(fp == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}

	if( fseek(fp, 0, SEEK_END) != 0){
		printf("Error seeking to end of file.\n");
		fclose(fp);
		exit(1);
	}

	filesize = ftell(fp);
	if( filesize == -1L){
		perror("Error in getting file size");
		fclose(fp);
		return EXIT_FAILURE;
	}

	printf("File size : %ld bytes\n", filesize);

	fclose(fp);

	return 0;
}
