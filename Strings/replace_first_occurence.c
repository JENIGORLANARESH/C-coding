#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	char old, new;
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter character to replace : ");
	scanf("%c", &old);
	getchar();
	printf("Enter new character : ");
	scanf("%c", &new);

	int replaced = 0;
	for(int i=0; str[i]; i++){
		if(str[i] == old){
			str[i] = new;
			replaced = 1;
			break;
		}
	}

	if(replaced){
		printf("After replacement : %s\n", str);
	}
	else{
		printf("Character %c not found in string.\n", old);
	}

	return 0;
}
