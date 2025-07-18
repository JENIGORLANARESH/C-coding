#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter string : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int count = 0;
	int len = strlen(str);
	int i=0;
	while(i < len-2){
		if(str[i] == 't' && str[i+1] == 'h' && str[i+2] == 'e' 
				&& (str[i+3] == ' ' || (str[i+3] == '\0' )  ) 
				&& ( (i == 0)|| str[i-1] == ' '  )  )
		{
			count++;
		}
		i++;
	}

	printf("Total no of \"the\" in string : %d\n", count);

	return 0;
}
