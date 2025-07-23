#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	for(int i=0; str[i]; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - ('a' - 'A');
		}
	}

	printf("%s\n", str);
	return 0;
}
