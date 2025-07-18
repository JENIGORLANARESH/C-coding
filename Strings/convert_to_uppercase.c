#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	for(int i=0; str[i] != '\0'; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - ('a' - 'A');
		}
	}

	printf("Uppercase : ");

	printf("%s\n", str);

	return 0;
}
