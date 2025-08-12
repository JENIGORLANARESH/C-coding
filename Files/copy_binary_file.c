#include <stdio.h>
#include <stdlib.h>

struct record{
	char name[20];
	int roll;
	float marks;
}student;

int main(void){
	FILE *fp, *fcopy;
	char str[100];
	char copy[100];
	printf("Enter name of the binary file to be copied : ");
	scanf("%99s", str);
	fp = fopen(str, "rb");
	if(fp == NULL){
		printf("Error in opening file\n");
		return EXIT_FAILURE;
	}

	printf("Enter name for copy binary file : ");
	scanf("%99s", copy);
	fcopy = fopen(copy, "wb");
	if(fcopy == NULL){
		perror("Error in creating copy file");
		return EXIT_FAILURE;
	}

	while( fread(&student, sizeof(student), 1, fp) == 1){
		fwrite(&student, sizeof(student), 1, fcopy);
	}

	printf("File copied successfully to %s\n", copy);

	fclose(fp);
	fclose(fcopy);

	return 0;
}
