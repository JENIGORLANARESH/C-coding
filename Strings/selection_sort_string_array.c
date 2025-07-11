#include <stdio.h>
#include <string.h>

int main(void){
	char arr[4][10] = {
			"Orange",
			"Grape",
			"Apple",
			"Guava"
		};

	char temp[10];

	for(int i=0; i<4; i++){
		for(int j=i+1; j<4; j++){
			if( strcmp(arr[i],arr[j]) > 0 ){
				strcpy(temp, arr[i]);
				strcpy(arr[i], arr[j]);
				strcpy(arr[j], temp);		
			}
		}
	}

	for(int i=0; i<4; i++){
		printf("%s\n", arr[i]);
	}

	return 0;
}
