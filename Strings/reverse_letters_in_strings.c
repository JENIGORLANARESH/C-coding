#include <stdio.h>
#include <string.h>

void reverse_letters(char str[]);
// reverse letters in a string

int main(void){
	char str[100];
	printf("Enter string : \n");
	fgets(str, 100, stdin);

	printf("Before : %s\n", str);

	reverse_letters(str);

	printf("After : %s\n", str);

	return 0;
}

void reverse_letters(char str[]){
	int len = strlen(str);
	int wstart = 0;
	int wend = 0;

	for(int i=0; i<len; i++){
	
		if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n' ){   //  '\n' added at end in fgets().
			wend = i-1;
			for(int j = wstart; j<wend; j++){
				char temp = str[j];
				str[j] = str[wend];
				str[wend] = temp;
				wend--;
			}
			wstart = i+1;
		}
	
	}
}
