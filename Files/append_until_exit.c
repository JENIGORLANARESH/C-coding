#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	FILE *fp;
	fp = fopen("./files/sample.txt", "a");
	if(fp == NULL){
		printf("Error in opening the file.\n");
		return EXIT_FAILURE;
	}

	char str[1024];
	while(1){
		fgets(str, sizeof(str), stdin);
		str[strcspn(str, "\n")] = '\0';
		if(strcmp(str, "exit") == 0){
			break;
		}
		fprintf(fp, "%s\n", str);
	}

	fclose(fp);
	printf("\nData appended successfully\n");
	return 0;
}
