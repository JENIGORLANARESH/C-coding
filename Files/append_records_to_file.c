#include <stdio.h>
#include <stdlib.h>

struct record{
	char name[20];
	int roll;
	float marks;
}student;

int main(void){
	FILE *fp;
	fp = fopen("./files/students.dat", "ab");	//append mode binary
	if(fp == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}

	int choice = 1;

	while(choice){
		printf("Enter student name : ");
		scanf("%s", student.name);
		printf("Enter student roll : ");
		scanf("%d", &student.roll);
		printf("Enter student marks : ");
		scanf("%f", &student.marks);
		fwrite(&student, sizeof(student), 1, fp);

		printf("Want to enter more ? (1 - Yes / 0 - No) :");
		scanf("%d", &choice);
	}

	printf("Records are successfully entered\n");
	fclose(fp);

	return 0;
}
