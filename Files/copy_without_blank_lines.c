#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp, *fcopy;
	char *file;
	printf("Enter file name : ");
	scanf("%[^\n]", file);

	fp = fopen(file, "r");
	if(fp == NULL){
		printf("Error while opening file.\n");
		exit(1);
	}

	fcopy = fopen("./files/noblackspace.txt", "w");
	if(fcopy == NULL){
		printf("Error in creating a nonblackspace.txt file.\n");
		fclose(fp);
		exit(1);
	}

	int ch , next;

	while( (ch = fgetc(fp)) != EOF){
		if(ch == '\n'){
			next = fgetc(fp);
			while( next == ' ' || next == '\n' || next != EOF){
				next = fgetc(fp);
			}
			fputc(ch, fcopy);
			if(next != EOF){
				fputc(next , fcopy);
			}
			else{
				break;
			}
		}
		else{
			fputc(ch, fcopy);
		}
	}

	printf("File copied to nonblankspace.txt without blank lines\n");

	fclose(fp);
	fclose(fcopy);

	return 0;
}
