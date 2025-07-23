#include <stdio.h>
#include <string.h>

int ispalindrome(char *str, int start, int end){
	while(start < end){
		if(str[start] != str[end]){
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	if(strlen(str) == 0){
   		printf("Empty string. No palindrome.\n");
    		return 0;
	}



	int a = 0;
	int b = 0;
	int len = 0;

	for(int i=0; str[i]; i++){
		for(int j=i; str[j]; j++){
				if(ispalindrome(str, i, j) && (j - i + 1) > len){
					a = i;
					b = j;
					len = j - i + 1;
				}
		}
	}

	printf("Largest palindrome substring : ");
	while(a<=b){
		printf("%c", str[a]);
		a++;
	}

	printf("\n");
	return 0;
}
