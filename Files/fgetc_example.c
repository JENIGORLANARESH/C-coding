#include <stdio.h>
#include <stdlib.h>

//	Declaration : int fgetc(FILE *fptr);
//	it reads single character from the file and increments the file pointer indicator
//	on success it return char in int
//	on failure it return EOF


int main(void){
	FILE *fp;
	fp = fopen("./files/sample.txt", "r");
	if(fp == NULL){
		printf("Error in opening file\n");
		exit(1);
	}
	int ch;
	ch = fgetc(fp);
	while(ch != EOF){
		printf("%c", ch);
		ch = fgetc(fp);
	}
	
	fclose(fp);
	printf("\n");
	return 0;
}
