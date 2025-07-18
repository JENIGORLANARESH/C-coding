#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int a = 0;
	int i = 0;
	while(str[i] != '\0'){
		if( ( str[i] >= 65 && str[i] <= 90) || ( str[i] >= 97 && str[i] <= 122 ) ){
			str[a] = str[i];
			a++;
		} 
		i++;
	}
	str[a] = '\0';

	a = 0;
	while(str[a] != '\0'){
		printf("%c", str[a]);
		a++;
	}

	printf("\n");
	return 0;
}
