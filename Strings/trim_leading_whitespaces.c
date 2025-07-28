#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int i=0,j=0;
	while(str[i] == ' ' && str[i] != '\0'){
		i++;
	}

	while(str[i]){
		str[j] = str[i];
		i++;
		j++;
	}

	str[j] = '\0';

	printf("%s\n", str);

	return 0;
}
