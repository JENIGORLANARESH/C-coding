#include <stdio.h>
#include <string.h>


void reverse(char *str, int start, int end){
	if(start < end){
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
		reverse(str, start, end);
	}
}


int main(void){
	char str[1000];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	reverse(str, 0, strlen(str)-1);

	printf("%s\n", str);
	return 0;
}
