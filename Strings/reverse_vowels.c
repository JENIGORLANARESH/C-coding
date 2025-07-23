#include <stdio.h>
#include <string.h>

int isvowel(char ch){
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' 
		|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main(void){
	char str[100];
	printf("Enter string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int end = strlen(str) - 1;
	int start = 0;

	while(start < end){
		char s = str[start];
		char e = str[end];
		if(isvowel(s) && isvowel(e)){
			str[end] = s;
			str[start] = e;
			start++;
			end--;
		}
		else if(isvowel(s)){
			end--;
		}
		else if(isvowel(e)){
			start++;
		}
		else{
			start++;
			end--;
		}
	}


	printf("%s\n", str);
	
	return 0;
}
