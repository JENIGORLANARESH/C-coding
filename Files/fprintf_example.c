#include <stdio.h>
#include <stdlib.h>

//	Declaration : fprintf(FILE *fptr, const char *format[,arg,...]);
//	writes formatted data into the file
//	on success return no of characters output to file
//	on failure return EOF

struct node{
	char name[20];
	float marks;
}student;

int main(void){
	FILE *fptr;
	int i,n;

	fptr = fopen("./files/sample.txt", "w");
	if(fptr == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}

	printf("Enter number of records : ");
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		printf("Enter student name and marks : ");
		scanf("%s %f", student.name, &student.marks);
		fprintf(fptr, "%s %.2f\n", student.name, student.marks);
	}

	fclose(fptr);

	return 0;
}
