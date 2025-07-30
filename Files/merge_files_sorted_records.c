#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct record{
	char name[20];
	int roll;
	float marks;
};

void display(FILE *fp){
	rewind(fp);
	struct record student;
	printf("NAME\tROLL\tMARKS\n");
	while( fread(&student, sizeof(student), 1, fp) == 1){
		printf("%s\t%d\t%.2f\n", student.name, student.roll, student.marks);
	}
	rewind(fp);
	printf("\n");
}

int main(void){
	struct record stu1, stu2;
	FILE *fp1, *fp2, *fp3;
	fp1 = fopen("./files/sectionA.dat", "rb");
	fp2 = fopen("./files/sectionB.dat", "rb");
	fp3 = fopen("./files/merged.dat", "rb+");

	if(fp1 == NULL || fp2 == NULL || fp3 == NULL){
		printf("Error in opening file\n");
		exit(1);
	}

	printf("Records of sectionA : \n");
	display(fp1);
	printf("Records of sectionB : \n");
	display(fp2);

	int a = fread(&stu1, sizeof(stu1), 1, fp1);
	int b = fread(&stu2, sizeof(stu2), 1, fp2);
	
	while( (a==1) && (b==1) ){
		if( strcmp(stu1.name, stu2.name) < 0){
			fwrite(&stu1, sizeof(stu1), 1, fp3);
			a = fread(&stu1, sizeof(stu1), 1, fp1); 
		}
		else{
			fwrite(&stu2, sizeof(stu2), 1, fp3);
			b = fread(&stu2, sizeof(stu2), 1, fp2);
		}
	}

	while(a == 1){
		fwrite(&stu1, sizeof(stu1), 1, fp3);
		a = fread(&stu1, sizeof(stu1), 1, fp1);
	}

	while(b == 1){
		fwrite(&stu2, sizeof(stu2), 1, fp3);
		b = fread(&stu2, sizeof(stu2), 1, fp2);
	}

	rewind(fp3);

	printf("Merged Records : \n");
	display(fp3);

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	return 0;
}
