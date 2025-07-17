#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	for(int i=0; str[i] != '\0'; i++){
		for(int j=1; str[j] != '\0'; j++){
			if(str[j-1] > str[j]){
				char t = str[j];
				str[j] = str[j-1];
				str[j-1] = t;
			}
		}
	}

	printf("Ascending order : ");
	for(int i=0; str[i] != '\0'; i++){
		printf("%c", str[i]);
	}

	printf("\n");
	return 0;
}
