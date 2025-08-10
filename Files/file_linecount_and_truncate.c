#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	fp = fopen("./sample.txt", "r+");
	
	if(fp == NULL){
		printf("Error in opening file\n");
		exit(1);
	}

	FILE *temp = fopen("./temp.txt", "w+");
	int n = 0;

	char character;
	while( (character = fgetc(fp)) != EOF){
		if(character == '\n')
			n++;
	}

	printf("Number of lines = %d\n", n);

	rewind(fp);

	int i=0;
	while( ((character = fgetc(fp)) != EOF) && (i<20) ){
		fputc(character , temp);
		i++;
	}

	rewind(temp);

	while( (character = fgetc(temp)) != EOF){
		printf("%c", character);
	}
	printf("\n");

	remove("./sample.txt");
	rename("./temp.txt", "./sample.txt");

	fclose(fp);
	fclose(temp);
	return 0;
}


