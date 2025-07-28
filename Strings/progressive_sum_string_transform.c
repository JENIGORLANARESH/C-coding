#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter str : \n");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	
	char result[100];

	int sum = 0;
	int j = 0;
	for(int i=0; str[i]; i++){
		char ch = str[i];
		if(ch >= '0' && ch <= '9'){
			int num = ch - '0';
			sum = sum + num;
			
			char temp[10];
			sprintf(temp, "%d", sum);

			for(int k=0; temp[k]; k++){
				result[j++] = temp[k];
			}	
		}
		else{
			result[j++] = ch;
		}
	}

	result[j] = '\0';

	printf("%s\n", result);
	return 0;
}
