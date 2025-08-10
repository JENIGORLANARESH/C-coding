#include <stdio.h>
#include <stdlib.h>

//	Declaration : int ferror(FILE *fptr);
//	returns a non zero value if error occurs
//	returns a zero if error not occurs

int main(void){
	FILE *fp;
	int ch;
	fp = fopen("./files/temp.txt", "w");

	ch = getc(fp);
	if(ferror(fp)){
		printf("Error in read  operation.\n");
		exit(1);
	}
	else
		printf("%c\n", ch);
	fclose(fp);
	return 0;
}
