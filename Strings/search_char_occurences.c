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

	int found = 0;
	printf("Character %c found at positions : ", ch);
	for(int i=0; str[i]; i++){
		if(str[i] == ch){
			printf("%d ", i);
			found = 1;
		}
	}

	if(found == 0){
		printf("None");
	}
	printf("\n");
	return 0;
}
