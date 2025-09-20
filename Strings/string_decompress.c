#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void){
	char str[1024];
	char result[2000];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int len = strlen(str);

	int m = 0;
	for(int i=0; i<len; i++){
		char ch = str[i];
		if( isdigit(ch)){
			char temp = str[i-1];
			int t = ch - '0';
			t--;
			for(int j=0; j<t; j++){
				result[m] = temp;
				m++;
			}
		}
		else{
			result[m] = str[i];
			m++;
		}
	}
	result[m] = '\0';

	printf("%s\n", result);

	return 0;
}
