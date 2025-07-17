#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	char sub[100];
	int start, end;
	printf("Enter string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter start and end index of substring : ");
	scanf("%d %d", &start, &end);
	int len = strlen(str);
	if(len <= end || start < 0 || start > end || end < 0){
		printf("substring out of range.\n");
		return 0;
	}
	int j = 0;
	for(int i = start; i<=end; i++){
		sub[j] = str[i];
		j++;
	}

	sub[j] = '\0';
	for(int i=0; sub[i] != '\0'; i++){
		printf("%c", sub[i]);
	}

	printf("\n");
	return 0;
}
