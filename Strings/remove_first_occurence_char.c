#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	char ch;
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	printf("Enter ch : ");
	scanf("%c", &ch);

	int temp = 0;
	for(int i=0; str[i]; i++){
		if(str[i] == ch){
			for(int j=i; str[j] ; j++){
				str[j] = str[j+1];
			}
			temp = 1;
			break;
		}
	}

	if(temp == 0){
		printf("Character %c not found in string.\n", ch);
	}
	else{
		printf("%s\n", str);
	}

	return 0;
}
