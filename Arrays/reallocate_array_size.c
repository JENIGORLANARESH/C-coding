#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){


	char *array = (char *)calloc(7, sizeof(char));

	strcpy(array, "naresh");


	printf("Before reallocating : %lu\n", strlen(array));	
	printf("Array = %s\n", array);

	array = (char *)realloc( array , 70*sizeof(char));

	strcat(array, "Vijayawada, Krishan, AP");
	
	printf("After reallocating : %ld\n", strlen(array));
	
	printf("%s\n", array);

	

	return 0;
}
