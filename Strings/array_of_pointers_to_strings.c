#include <stdio.h>
#include <string.h>

int main(void){
	char *arr[] = {
		"Apple",
		"Grape",
		"Banana",
		"Lemon",
		"Carrot"
	};

	for(int i=0; i<5; i++){
		printf("String : %s\n", arr[i]);
		printf("Address of string : %p\n", arr[i]);
		printf("Address of string stored at (pointer) : %p\n\n", arr+i);
	}

	return 0;
}
