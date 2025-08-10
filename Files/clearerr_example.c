#include <stdio.h>
#include <stdlib.h>

//	Declaration : void clearerr(FILE *fptr);
//	sets EOF AND Error indicator to 0;
//	NOTE : On many implementations (like GCC with glibc on Linux), fseek() and rewind() also clear the EOF and ferror flags.


struct record{
	char name[20];
	int roll;
	float marks;
}student;

int main(void){
	FILE *fp;
	fp = fopen("./files/students.dat", "rb");
	if(fp == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}

	printf("First time : \n");
	printf("NAME\tROLL\tMARKS\n");
	while( fread(&student, sizeof(student), 1, fp) == 1){
		printf("%s\t%d\t%.2f\n", student.name, student.roll, student.marks);
	}
	printf("\nEnd of first time\n");

	if(feof(fp)){
		printf("\nEnd Of File reached \n");
	}else{
		printf("\nEnd Of File Not reached \n");
	}
	
	fseek(fp, 0, 0);	// moving position indicator to start
	clearerr(fp);
	
	printf("\nclearerr() is used\nfseek() is used\n");

	if(feof(fp)){
		printf("\nEnd Of File reached \n");
	}else{
		printf("\nEnd Of File Not reached \n");
	}



		
	printf("\nSecond time : \n");
	printf("NAME\tROLL\tMARKS\n");		// it will print since feof , ferror are cleared 
						// and position indicator is set to start
	while( fread(&student, sizeof(student), 1, fp) == 1){
		printf("%s\t%d\t%.2f\n", student.name, student.roll, student.marks);
	}
	printf("\nEnd of Second time\n");

	fclose(fp);

	return 0;
}
