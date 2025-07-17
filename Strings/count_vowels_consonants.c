#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int ovel = 0;
	int conso = 0;
	int i=0;
	while(str[i] != '\0'){
		char ch = str[i];
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' 
				|| ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U'){
			ovel++;
		}
		else if( (ch > 'a' && ch <= 'z') || ( ch > 'A' && ch <= 'Z') ){
			conso++;
		} 
		i++;
	}

	printf("Ovels : %d\n", ovel);
	printf("Consonent : %d\n", conso);

	return 0;
}
