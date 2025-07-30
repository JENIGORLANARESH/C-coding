#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record{
	char name[20];
	int roll;
	float marks;
}student;

void display(FILE *fp){
	rewind(fp);
	printf("NAME\tROLL\tMARKS\n");
	while( fread(&student , sizeof(student), 1, fp) == 1){
		printf("%s\t%d\t%.2f\n", student.name, student.roll, student.marks);
	}
	rewind(fp);
	printf("\n");
}

int main(void){
	struct record temp;
	struct record array[50];
	int i = 0;
	FILE *fp;
	fp = fopen("./files/students.dat", "rb+");
	if(fp == NULL){
		printf("Error in opening file\n");
		exit(1);
	}

	printf("Before sorting : \n");
	display(fp);

	while( fread(&student, sizeof(student), 1, fp) == 1){
		array[i] = student;
		i++;
	}

	//Bubble sort
	for(int j=0; j<i; j++){
		for(int k=0; k<i-1-j; k++){
			if( strcmp(array[k].name, array[k+1].name) > 0 ){
				temp = array[k];
				array[k] = array[k+1];
				array[k+1] = temp;
			}
		}
	}

	rewind(fp);
	fwrite(array, sizeof(student), i, fp);

	printf("After sorting : \n");
	display(fp);

	fclose(fp);

	return 0;
}
