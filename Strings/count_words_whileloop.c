#include<stdio.h>
#include<string.h>

int count_words(char *str);

int main(void){
	char arr[200];
	int words=0;
	printf("Enter the string : \n");
	fgets(arr, sizeof(arr), stdin);

	words = count_words(arr);

	printf("Number of words = %d\n", words);

	return 0;
}

int count_words(char *str){
	int count = 0;
	while(*str != '\0'){
		while(*str == ' ') str++;
		if(*str == '\0') return count;
		while( *str != ' '&& *str != '\0'){
			printf("%c", *str);
			str++;
		}
		count++;
		printf("\n");
	}
	return count;
}


