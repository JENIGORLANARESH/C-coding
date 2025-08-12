#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	time_t t;
	struct tm *time_structure;
	char buffer[30];
	FILE *fp;

	fp = fopen("./files/date_time_log.txt", "a");
	if(fp == NULL){
		perror("Error in opening file");
		return EXIT_FAILURE;
	}

	time(&t);

	time_structure = localtime(&t);

	strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", time_structure);

	fprintf(fp, "%s\n", buffer);

	fclose(fp);

	printf("Date and Time appended to date_time_log.txt\n");
	return 0;
}
