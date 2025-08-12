#include <stdio.h>
#include <string.h>

int main(void){
	char str[30];
	printf("Enter file name : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	
	FILE *fp = fopen(str, "r");
	if(fp == NULL){
		perror("Error:");
	}
	else{
		printf("File Exists.\n");
		fclose(fp);
	}


	return 0;
}
