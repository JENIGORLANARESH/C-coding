#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	int freq[128] = {0};

	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	for(int i=0; str[i] != '\0'; i++){
		freq[str[i]]++;
	}

	for(int i=0; i<128; i++){
		if(freq[i] > 0){
			printf("char %c : %d\n", i, freq[i]); 
		}
	}

	printf("\n");
	return 0;	
}
