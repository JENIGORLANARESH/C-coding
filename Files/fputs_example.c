#include <stdio.h>
#include <stdlib.h>

//	Declaration : int fputs(const char *str, FILE *fptr);
//	it write null terminated string pointed to by str to a file associated with file poiter fptr.
//	the null character at end of string is not written to file
//	on success it return non negative value
//	on failure it returns EOF
//

int main(void){
	FILE *fptr;
	char str[100];

	fptr = fopen("./files/sample.txt", "w");
	if(fptr == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}
	printf("Enter text : \n");
	printf("to stop entering, press ctrl+d or ctrl+z\n");


	while( fgets(str, sizeof(str), stdin) != NULL){
		fputs(str, fptr);
	}
	
	fclose(fptr);
	
	return 0;
}
