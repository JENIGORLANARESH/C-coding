#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int freq[256] = {0};
	int minfreq = INT_MAX;
	char min = '\0';
	
	for(int i=0; str[i]; i++){
		freq[str[i]]++;
	}
	
	for(int i=0; str[i]; i++){
		unsigned char ch = str[i];
		if(freq[ch] < minfreq && freq[ch] >0){
			minfreq = freq[ch];
			min = ch;
		}
	}
	
	if(min != '\0'){
		printf("Minimum frequency character : %c, frquency : %d\n", min, minfreq);
	}else{
		printf("No valid character found.\n");
	}
	return 0;
}
