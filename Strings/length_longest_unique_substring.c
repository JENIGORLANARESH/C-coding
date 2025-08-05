#include <stdio.h>
#include <string.h>


int main(void){
	char str[1000];
	printf("Enter str : ");
	scanf("%[^\n]", str);

	int index[256];
	for(int i=0; i<256; i++){
		index[i] = -1;
	}

	int start = 0;
	int max = 0;
	int longest = 0;

	for(int i=0; str[i]; i++){
		char ch = str[i];

		if( index[(unsigned char)ch] >= start){
			start = 1 + index[(unsigned char)ch];
		}

		index[(unsigned char)ch] = i;

		int currentlength = i - start + 1;

		if(currentlength > max){
			max = currentlength;
			longest = start;
		}

	}

	for(int i = longest; i < (longest+max); i++){
		printf("%c", str[i]);
	}

	printf("\nlength : %d\n", max);

	return 0;
}



