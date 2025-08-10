#include <stdio.h>
#include <stdlib.h>

//	Declaration : int feof(FILE *fptr);
//	returns non zero value if end of file has been reached
//	returns zero otherwise
//	feof(fp) -> becomes true only when you try read past the end of the file

struct record{
	char name[20];
	int roll;
	float marks;
}student;

int main(void){
	FILE *fp;
	fp = fopen("./files/students.dat", "rb");
	if(fp == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}
	
	fread(&student, sizeof(student), 1, fp);
	while(!feof(fp)){
		printf("%s\t%d\t%.2f\n", student.name, student.roll, student.marks);
		fread(&student, sizeof(student), 1, fp);
	}

	fclose(fp);
	return 0;
}
