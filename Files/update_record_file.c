#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record{
	char name[20];
	int roll;
	float marks;
}student;

void displayRecords(FILE *fp){
	rewind(fp);
	printf("NAME\tROLL\tMARKS\n");
	while( fread(&student, sizeof(student), 1, fp) == 1){
		printf("%s\t%d\t%.2f\n", student.name, student.roll, student.marks);
	}
	rewind(fp);
	printf("\n");
}

int main(void){
	FILE *fp;
	char name[20];
	int size = sizeof(student);
	int flag = 0;

	fp = fopen("./files/students.dat", "rb+");
	if(fp == NULL){
		printf("Error in opening file\n");
		exit(1);
	}

	displayRecords(fp);

	printf("Enter name of the student whose record is to be modified : ");
	scanf("%s", name);

	while( fread(&student, sizeof(student), 1, fp) == 1){
		if(strcmp(student.name, name) == 0){
			printf("Enter new data -->\n");
			printf("Enter name : ");
			scanf("%s", student.name);
			printf("Enter roll : ");
			scanf("%d", &student.roll);
			printf("Enter marks : ");
			scanf("%f", &student.marks);

			fseek(fp, -size, 1);	// setting position indicator at starting of record to be modified

			fwrite(&student, sizeof(student), 1, fp);
			flag = 1;
			break;
		}
	}

	if(flag){
		printf("Record Modified.....\n");
		displayRecords(fp);
	}else{
		printf("Name not found in file.\n");
	}

	fclose(fp);

	return 0;
}
