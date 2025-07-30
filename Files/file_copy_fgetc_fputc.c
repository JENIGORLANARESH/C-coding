#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fdes, *fsrc;
	int ch;

	fsrc = fopen("./files/sample.txt", "r");
	if(fsrc == NULL){
		printf("Error in opening source file.\n");
		exit(1);
	}

	fdes = fopen("./files/destination.txt", "w");
	if(fdes == NULL){
		printf("Error in opening destination file.\n");
		exit(1);
	}

	ch = fgetc(fsrc);
	while(ch != EOF){
		fputc(ch, fdes);
		ch = fgetc(fsrc);
	}

	fclose(fsrc);
	fclose(fdes);

	return 0;
}
