#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int len = strlen(str);
	printf("Before strlen = %d\n", len);
	int lastindex = len-1;

	while(str[lastindex] == ' '){
		lastindex--;
	}
	
	str[++lastindex] = '\0';

	len = strlen(str);
	printf("After strlen : %d\n", len);
	printf("%s\n", str);

	return 0;
}
