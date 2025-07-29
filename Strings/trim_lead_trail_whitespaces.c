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

	int lastIndex = strlen(str) - 1;
	while(str[lastIndex] == ' '){
		lastIndex--;
	}

	int i = 0;
	while(firstIndex <= lastIndex){
		str[i] = str[firstIndex];
		i++;
		firstIndex++;
	}
	str[i] = '\0';

	printf("After trimming leading & trailing whitespaces str :\n%s\n", str);

	return 0;
}
