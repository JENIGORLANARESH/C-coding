#include <stdio.h>
void baseconv(int num, int base);

int main(void){
	int num, base;
	printf("Enter dec num : ");
	scanf("%d",&num);
	printf("Enter base to be converted : ");
	scanf("%d", &base);
	baseconv(num, base);
	printf("\n");
	return 0;
}

void baseconv(int num, int base){
	int rem = num % base;
	if(num == 0) return;
	baseconv(num/base, base);
	if(rem < 10){
		printf("%d", rem);
	}
	else{
		printf("%c", rem - 10 + 'A');
	}
	
}
