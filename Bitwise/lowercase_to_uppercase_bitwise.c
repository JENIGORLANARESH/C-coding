#include <stdio.h>

int main(void){
	char ch;
	printf("Enter lowercase char : ");
	scanf("%c", &ch);
	
	if(ch < 'a' || ch > 'z'){
		printf("Wrong character entered.\n");
		return 0;
	}

	ch = ch & ~32;

	printf("ch = %c\n", ch);
	return 0;
}
