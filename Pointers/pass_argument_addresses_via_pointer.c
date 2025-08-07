#include <stdio.h>

void processArgs(int *ptr){
	printf("Argument 1 : %d\n", *(ptr));
	printf("Argument 2 : %d\n", *(ptr+1));
}

int main(void){
	int a = 10, b = 20;
	int args[] = {a, b};
	processArgs(args);
	return 0;
}
