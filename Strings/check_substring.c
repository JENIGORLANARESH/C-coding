#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	char sub[100];
	printf("Enter string : ");
	fgets(str, sizeof(str), stdin);
	printf("Enter sub string : ");
	fgets(sub, sizeof(sub), stdin);

	str[strcspn(str, "\n")]  = '\0';
	sub[strcspn(sub, "\n")] = '\0';

	int sublen = strlen(sub);
	
	for(int i=0; str[i] != '\0'; i++){
		if(str[i] == sub[0]){
			int k = 0;
			while( sub[k] != '\0' && str[k+i] != '\0'){
				if(sub[k] == str[k+i]){
					k++;
				}
				else break;
			}
			if(k == sublen){
				printf("Substring present.\n");
				return 0;
			}
		}	
	}


	printf("Substring Not Present.\n");

	return 0;
}
