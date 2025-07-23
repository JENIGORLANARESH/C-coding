#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int freq[256] = {0};
	char maxchar = '\0';
	int maxfreq = 0;

	for(int i=0; str[i]; i++){
		unsigned char ch = str[i];
		freq[ch]++;

		if(freq[ch] > maxfreq){
			maxchar = ch;
			maxfreq = freq[ch];
		}
	}		
	
	printf("Highest frequency character : %c, frequency : %d\n", maxchar, maxfreq);
	return 0;
}
