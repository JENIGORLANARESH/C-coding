#include <stdio.h>
#include <string.h>

void print(char *line){
	char *w = strstr(line, "warning:");
	char *e = strstr(line, "error:");
	if( w ){
		printf("%s", w);
	}
	else if( e ){
		printf("%s", e);
	}
}


int main(void){
	FILE *fp;

	char line[1024];

	fp = fopen("./log.txt", "r");

	if(fp == NULL){
		printf("failed to open log.txt\n");
		return 1;
	}

	while( fgets(line, sizeof(line), fp) != NULL){
		print(line);
	}

	fclose(fp);

	return 0;
}
