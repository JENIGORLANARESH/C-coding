#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	char ch;
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter character to be removed : ");
	scanf("%c", &ch);

	int i=0, j=0;
	for(i=0; str[i]; i++){
		char c = str[i];
		if(c != ch){
			str[j] = str[i];
			j++;	
		}
	}

	str[j] = '\0';

	printf("After : %s\n", str);
	return 0;	
}
