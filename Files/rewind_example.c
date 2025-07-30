#include <stdio.h>
#include <stdlib.h>

//	Declaration : void rewind(FILE *fptr);
//	moves position indicator to beginning
//	useful 	when we open a file for update
//	rewind(fptr) is equivalent to fseek(fptr, 0L, 0); and clearerr(fptr);
//

int main(void){
	FILE *fp;
	fp = fopen("./files/sample.dat", "rb+");
	if(fp == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}

	printf("Position indicator -> %ld\n", ftell(fp));
	fseek(fp, 0, 2);
	printf("Position indicator -> %ld\n", ftell(fp));

	rewind(fp);
	
	printf("Position indicator after using rewind() -> %ld\n", ftell(fp));

	fclose(fp);

	return 0;

}
