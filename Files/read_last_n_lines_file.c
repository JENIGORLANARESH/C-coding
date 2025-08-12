#include <stdio.h>
#include <stdlib.h>

int main(void){
	char str[100];
	int n;
	FILE *fp;
	char line[1024];
	printf("Enter file name : ");
	scanf("%99s", str);
	fp = fopen(str, "r");
	if(fp == NULL){
		perror("Error in opening file");
		return EXIT_FAILURE;
	}
	printf("Enter n : ");
	scanf("%d", &n);
	int count = 0;
	int ch;
	while( fgets(line, sizeof(line), fp) != NULL){
			count++;
	}
	if(n < 1 || n>count){
		printf("n out of range.\n");
		fclose(fp);
		return EXIT_FAILURE;
	}
	int start = count - n;
	rewind(fp);

	int c = 0;

	while ( fgets(line, sizeof(line), fp) != NULL){
		if(c >= start){
			printf("%s",line);
		}
		c++;
	}

	fclose(fp);
	return 0;
}
