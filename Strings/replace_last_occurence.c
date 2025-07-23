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

	int lastindex = -1;
	for(int i=0; str[i]; i++){
		if(str[i] == old){
			lastindex = i;
		}
	}

	if(lastindex == -1){
		printf("Character %c Not found in string.\n", old);
	}
	else{
		str[lastindex] = new;
		printf("%s\n", str);
	}
	return 0;
}
