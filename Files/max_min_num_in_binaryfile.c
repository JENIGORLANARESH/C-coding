#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void){
	FILE *fp;
	char str[100];
	int n, item, max, min;
	printf("Enter binary file : ");
	scanf("%99s", str);
        fp = fopen(str, "wb+");
	if(fp == NULL){
		printf("Error in creating file.\n");
		exit(1);
	}

	printf("Enter number of integers to be entered into the binary file : ");
	scanf("%d", &n);
	printf("Enter numbers : \n");
	while(n > 0){
		scanf("%d", &item);
		fwrite(&item, sizeof(item), 1, fp);
		n--;
	}
	rewind(fp);

	max = INT_MIN;
	min = INT_MAX;

	while( fread(&item, sizeof(item), 1, fp) == 1){
		if(item > max)
			max = item;
		if(item < min)
			min = item;
	}

	printf("Maximum = %d\n", max);
	printf("Minimum = %d\n", min);

	fclose(fp);
	return 0;
}
