#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	int arr[128] = {0};	// in C, if you initialize first element of an array and leave rest unspecified, the entire array gets zeroed(0).

	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	for(int i=0; str[i] != '\0'; i++){
		arr[str[i]]++;
	}

	for(int i=0; i<128; i++){
		if(arr[i] > 1){
			printf("%c ", i);
		}
	}

	printf("\n");
	return 0;
}
