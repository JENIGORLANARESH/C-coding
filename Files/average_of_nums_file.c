#include <stdio.h>
#include <stdlib.h>

int main(void){
	char file[50];
	FILE *fp;
	printf("Enter file name : ");
	scanf("%99s", file);
	fp = fopen(file, "r");
	if(fp == NULL){
		perror("Error in opening file");
		return EXIT_FAILURE;		
	}

	int sum = 0;
	float count = 0;
	int num;
	while(1){
		int result = fscanf(fp, "%d", &num);
		if(result == 1){
			sum = sum + num;
			count++;
		}
		else if(result == EOF){
			break;
		}
		else{
			fscanf(fp, "%*s");
		}
	}

	if(count>0){
		printf("Average : %.2f\n", sum/count);
	}
	else
		printf("NO valid integer found in file\n");
	
	fclose(fp);
	return 0;
}
