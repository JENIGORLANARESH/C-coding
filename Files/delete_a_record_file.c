#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct record{
	char name[20];
	int roll;
	float marks;
}student;

void display(FILE *fp){
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
	int flag = 0;

	fp = fopen("./files/students.dat", "rb");
	if(fp == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}
	
	display(fp);

	FILE *ftemp = fopen("./files/temp.dat", "wb");

	printf("Enter name of student to be deleted : ");
	scanf("%s", name);

	while( fread(&student, sizeof(student), 1, fp) == 1){
		if( strcmp(student.name, name) != 0){
			fwrite(&student, sizeof(student), 1, ftemp);
		}
		else{
			flag = 1;
		}
	}
	

	fclose(fp);
	fclose(ftemp);

	remove("./files/students.dat");
	rename("./files/temp.dat", "./files/students.dat");

	if(flag){
		printf("Record successfully Deleted....\n");
		display(fopen("./files/students.dat", "rb"));
	}
	else{
		printf("Name not found in file.\n");
	}


	return 0;
}
