#include <stdio.h>
#include <stdlib.h>

struct record{
	char name[20];
	int roll;
	float marks;
}student;

int main(void){
	FILE *fp;
	fp = fopen("./files/students.dat", "rb");	//append mode binary
	if(fp == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}

	printf("NAME\tROLL\tMARKS\tGRADE\n");

	while(fread(&student, sizeof(student), 1, fp) == 1){
		printf("%s\t%d\t%.2f\t", student.name, student.roll, student.marks);
		if(student.marks >= 90){
			printf("%c\n", 'A');
		}
		else if(student.marks >=80){
			printf("%c\n", 'B');
		}
		else{
			printf("%c\n", 'C');
		}
	}

	fclose(fp);

	return 0;
}
