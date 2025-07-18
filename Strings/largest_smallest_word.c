#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(void){
	char str[100];
	printf("Enter : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int slen = INT_MAX;
	int blen = INT_MIN;

	int i=0;

	int s = 0;
	int b = 0;

	while(str[i] != '\0'){
		while(str[i] == ' '){
			i++;
		}

		int start = i;
		while(str[i] != ' ' && str[i] != '\0'){
			i++;
		}

		int len = i - start;
		if(len < slen){
			s = start;
			slen = len;
		}
		if(len > blen){
			b = start;
			blen = len;
		}
		
	}

	printf("Smallest : ");
	while(str[s] != '\0' && str[s] != ' '){
		printf("%c", str[s]);
		s++;
	}

	printf("\nBiggest : ");
	while(str[b] != ' ' && str[b] != '\0'){
		printf("%c", str[b]);
		b++;
	}

	printf("\n");
	return 0;	
}


