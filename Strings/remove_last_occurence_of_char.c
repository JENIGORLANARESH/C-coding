#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	char ch;
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter character : ");
	scanf("%c", &ch);

	int len = strlen(str);
	int found = 0;
	for(int i=len-1; i>=0; i--){
		char c = str[i];
		if(c == ch){
			found = 1;
			for(int j=i; str[j]; j++){
				str[j] = str[j+1];
			}
			break;
		}
	}

	if(found){
		printf("%s\n", str);
	}
	else{
		printf("%c Not found in string.\n", ch);
	}
	return 0;
}
