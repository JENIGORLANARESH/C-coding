#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter str : \n");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int len = strlen(str);

	int middle;
	if(len % 2 == 0) middle = len/2;
	else middle = len/2+1;

	int end = len - 1;

	while(middle < end){
		char temp = str[end];
		str[end] = str[middle];
		str[middle] = temp;
		middle++;
		end--;
	}

	printf("%s\n", str);

	return 0;
}
