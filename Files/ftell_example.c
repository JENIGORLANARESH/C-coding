#include <stdio.h>
#include <stdlib.h>

//	Declaration : long ftell(FILE *fptr);
//	returns current position of file position indicator from the beginning

struct record{
	char name[20];
	int roll;
	float marks;
}student;


int main(void){
	FILE *fp;
	fp = fopen("./files/sample.dat", "rb");
	if(fp == NULL){
		printf("Error while opening file.\n");
		exit(1);
	}

	printf("Position indicator at beginning : %ld\n", ftell(fp));

	while( fread(&student, sizeof(student), 1, fp) == 1){	// position indicator is incremented after every fread
		printf("%s\t%d\t%f\n", student.name, student.roll, student.marks);	
		printf("Position indicator -> %ld\n", ftell(fp));	// now indicates to next record
	}

	printf("Position indicator -> %ld\n", ftell(fp));
	fclose(fp);

	return 0;
}
