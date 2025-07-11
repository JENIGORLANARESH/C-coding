#include <stdio.h>
#include <string.h>

void reverse_words(char str[], int start, int end);
void reverse(char str[], int start, int end);

int main(void){
	char str[100];
	printf("Enter string : \n");
	fgets(str, 100, stdin);
	printf("Before:%s\n", str);

	int len = strlen(str);
	reverse(str, 0, len-2);
	reverse_words(str, 0, len-1);

	printf("After:%s\n", str);
	return 0;
}

void reverse_words(char str[], int start, int end){
	for(int i=0; i<=end; i++){
		if(str[i] == ' ' || str[i] == '\n'){
			reverse(str, start, i-1);
			start = i+1;
		}
	}
}

void reverse(char str[], int start, int end){
	while(start <= end){
		char temp = str[end];
		str[end] = str[start];
		str[start] = temp;
		start++;
		end--;
	}
}
