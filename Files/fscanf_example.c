#include <stdio.h>
#include <stdlib.h>

//	Declaration : fscanf(FILE *fptr, const char *format[address,...]);
//	returns no ofarguments that were assigned some values on success
//	returns EOF on end of file

struct node{
	char name[20];
	float marks;
}student;

int main(void){
	FILE *fptr;
	fptr = fopen("./files/sample.txt", "r");
	if(fptr == NULL){
		printf("Error in opening file\n");
		exit(1);
	}

	printf("NAME\tMARKS\n");

	while(fscanf(fptr, "%s %f", student.name, &student.marks) == 2){
		printf("%s\t%f\n", student.name, student.marks);
	}

	fclose(fptr);
	return 0;
}
