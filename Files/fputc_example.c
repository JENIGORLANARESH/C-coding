#include <stdio.h>
#include <stdlib.h>

//	Declaration : int fputc( int c < FILE *fptr);
//	write a char to specified file at the current file position and then increments the the file position indicator
//	on success it returns an integer representing the character
//	on error it return EOF

int main(void){
	FILE *fp;
	int ch;
	fp = fopen("./files/sample.txt", "w");
	if(fp == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}
	printf("Enter text : ");
	ch = getchar();
	while(ch != EOF){
		fputc(ch, fp);
		ch = getchar();
	}

	fclose(fp);

	return 0;
}

