#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int firstIndex = 0;
	while(str[firstIndex] == ' '){
		firstIndex++;
	}
	
	int lastIndex = strlen(str)-1;
	while(str[lastIndex] == ' '){
		lastIndex--;
	}

	int i=0;

	while(firstIndex <= lastIndex){
		if(str[firstIndex] != ' '){
			str[i++] = str[firstIndex++];
		}
		else if(str[i-1] != ' '){
			str[i++] = str[firstIndex++];
		}
		else{
			firstIndex++;
		}

	}
	str[i] = '\0';

	printf("%s\n", str);

	return 0;
}
