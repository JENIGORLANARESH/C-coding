#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int temp[128] = {0};

	int i=0, j=0;
	for(i = 0; str[i]; i++){
		char ch = str[i];
		temp[ch]++;
		if(temp[ch]==1){
			str[j] = ch;
			j++;
		}
	}

	str[j] = '\0';

	printf("%s\n", str);

	return 0;
}
