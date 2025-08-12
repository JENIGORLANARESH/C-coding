#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	char str[50];
	int n;
	printf("Enter file name : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	FILE *fp = fopen(str, "r");
	if(fp == NULL){
		perror("Error:");
		exit(EXIT_FAILURE);
	}
	
	FILE *temp = fopen("./files/temp.txt", "w");
	if(temp == NULL){
		perror("Error in creating temporary file:");
		fclose(fp);
		exit(EXIT_FAILURE);
	}

	printf("Enter line number to be deleted : ");
	scanf("%d", &n);
	
	char line[1024];	// max len of line
	int count = 1;
	int found = 0;

	while( fgets(line, sizeof(line), fp) != NULL){
		if(count != n){
			fputs(line, temp);
		}
		else{
			found = 1;
		}
		count++;
	}

	fclose(fp);
	fclose(temp);

	if(!found){
		printf("Line number out of range.\n");
		remove("./files/temp.txt");		
	}
	else{
		remove(str);
		rename("./files/temp.txt", str);
		printf("Line %d deleted successfully.\n", n);
	}
	return 0;
}



