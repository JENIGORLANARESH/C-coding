#include <stdio.h>
#include <stdlib.h>

//	Declaration : size_t fwrite(const void *ptr, size_t size, size_t n, FILE *fptr);
//	ptr -> points to block of memory
//	size -> length of an item in bytes
//	n -> no of items to be written in memory
//	fptr -> pointer points to file
//	on success it will return n items which are written to file
//	on error or end of file it return a number less than n

struct record{
	char name[20];
	int roll;
	float marks;
}student;

int main(void){
	int n;
	FILE *fp;
	fp = fopen("./files/sample.dat", "wb");
	if(fp == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}

	printf("Enter number of records : ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		printf("Enter name : ");
		scanf("%s", student.name);
		printf("Enter roll no : ");
		scanf("%d", &student.roll);
		printf("Enter marks : ");
		scanf("%f", &student.marks);
		fwrite(&student, sizeof(struct record), 1, fp);
	}

	printf("Data is successfully stored in binary format.\n");

	fclose(fp);
	return 0;
}
