#include <stdio.h>

int main(void){
	char ch;
	printf("Enter uppercase char : ");
	scanf("%c", &ch);

	if(ch < 'A' || ch > 'Z'){
		printf("Wrong char entered.\n");
		return 0;
	}

	ch = ch | 32;

	printf("char ch = %c\n", ch);

	return 0;
}
