#include <stdio.h>
#include <stdlib.h>

//	Declaration :  int seek(FILE *fptr, long displacement, int origin);
//	fptr -> pointer to file
//	displacement -> no of bytes which are skipped (positive or negative)
//	origin -> position relative to which displacement takes place(beginning, current, end)

struct record{
	char name[20];
	int roll;
	float marks;
}student;

int main(void){
	FILE *fp;
	fp = fopen("./files/sample.dat", "rb");
	if(fp == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}

	int n;
	printf("Enter the record number to be read : ");
	scanf("%d", &n);

	// skipping n-1 records
	//  moving position indicator nth record
	
	fseek(fp, (n-1)*sizeof(student), 0);

	fread(&student, sizeof(student), 1, fp);

	printf("%s\t%d\t%f\n", student.name, student.roll, student.marks);

	fclose(fp);
	return 0;
}
