#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	char old, new;
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter replaced character : ");
	scanf(" %c", &old);
	printf("Enter new character : ");
	scanf(" %c", &new);		// space before %c to ignore leftover newline in input buffer

	int replaced = 0;
	for(int i=0; str[i]; i++){
		if(str[i] == old){
			str[i] = new;
			replaced = 1;
		}
	}

	if(replaced){
		printf("%s\n", str);
	}
	else printf("Character %c Not found in string.\n", old); 
	return 0;
}
