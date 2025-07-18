#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void){
	char str[100];
	printf("Enter string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int count = 0;

	for(int i=0; str[i] != '\0'; i++){
		if(ispunct(str[i])){
			count++;
		}
	}

	printf("Number of punctuations : %d\n", count);
	return 0;
}
