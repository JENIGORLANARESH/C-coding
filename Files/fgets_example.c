#include <stdio.h>
#include <stdlib.h>

// Declaration : char *fgets(char *str, int n, FILE *fptr);
// 	1. reads characters from file and stores in string pointer by str
// 	2. reads atmost n-1 characters
// 	on success returns string pointed to by str
// 	on error or end of file returns NULL 
//

int main(void){
	char str[100];
	FILE *fptr;
	fptr = fopen("./files/sample.txt", "r");

	if(fptr == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}

	while(fgets(str, 3, fptr) != NULL){
		printf("%s", str);
	}

	fclose(fptr);

	return 0;
}
