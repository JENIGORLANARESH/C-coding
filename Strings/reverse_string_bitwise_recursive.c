#include <stdio.h>
#include <string.h>

void reverseBitwiseRecursive(char *str, int start, int end){
	if(start < end){
		str[start] = str[start] ^ str[end];
		str[end] = str[start] ^ str[end];
		str[start] = str[start] ^ str[end];
		start++;
		end--;
		reverseBitwiseRecursive(str, start, end);
	}
	else return;
}

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	reverseBitwiseRecursive(str, 0, strlen(str)-1);
	
	printf("%s\n", str);
	return 0;
}
