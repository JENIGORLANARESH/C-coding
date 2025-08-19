#include <stdio.h>
#include <string.h>

void reverse(char *str, int start, int end){
	while(start < end){
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

void word_order_reverse(char str[]){
	int len = strlen(str);
	reverse(str, 0, len-1);

	int start = 0, end = 0;
	while(end <= len){
		if(str[end] == ' ' || str[end] == '\0'){
			reverse(str, start, end-1);
			start = end + 1;
		}
		end++;
	}
}

int main(void){
	char str[100];
	printf("Enter string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	word_order_reverse(str);

	printf("%s\n", str);

	return 0;
}
