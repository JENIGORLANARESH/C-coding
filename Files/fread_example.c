#include <stdio.h>
#include <stdlib.h>

// Declaration : size_t fread(void *ptr, size_t size, size_t n, FILE *fptr);
// ptr -> pointer that points to block memory which recieves data read from the file
// size -> length of each item in bytes
// n -> no of items to be read from the file
// fptr -> file pointer which points to the file
// return no of records successfully read


struct record{
	char name[20];
	int roll;
	float marks;
}student;

int main(void){
	FILE *fp;
	fp = fopen("./files/sample.dat", "rb");
	if(fp == NULL){
		printf("Error in opening file\n");
		exit(1);
	}

	printf("NAME\tROLL NO\tMARKS\n");

	int n = fread(&student, sizeof(student), 1, fp);
	
	while(n == 1){
		printf("%s\t%d\t%f\n", student.name, student.roll, student.marks);
		n = fread(&student, sizeof(student), 1, fp);
	}

	fclose(fp);

	return 0;
}
