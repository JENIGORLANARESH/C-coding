#include <stdio.h>
#include <string.h>

int non_repeated(char *str, int start, int end){
	for(int i=start; i<end; i++){
		char ch = str[i];
		for(int j=i+1; j<=end; j++){
			if(ch == str[j]){
				return 0;
			}
		}
	}
	return 1;
}

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int len = strlen(str);

	int start = 0;
	int end = 0;
	int longest = 0;

	for(int i=0; i<len-1; i++){
		for(int j=i+1; j<len; j++){
			if(non_repeated(str, i, j) && (longest < (j-i+1)) ) {
				start = i;
				end = j;
				longest = j-i+1;		
			}
		}
	}

	printf("Longest substring : ");
	for(int i=start; i<=end; i++){
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}




