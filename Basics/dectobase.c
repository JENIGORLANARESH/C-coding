#include<stdio.h>
void convert(int n, int base);

int main(void){
	int n, base;
	printf("Enter a decimal number : ");
	scanf("%d", &n);
	printf("Enter base to be converted : ");
	scanf("%d", &base);
	convert(n,base);
	return 0;
}

void convert(int n, int base){
	char arr[20];
	int i=0;
	while(n>0){
		int rem = n % base;
		n = n/base;
		if(rem > 9 && rem < 16){
			arr[i++] = rem - 10 + 'A';
		}
		else{
			arr[i++] = rem + '0';
		}
	}

	for(int j = i-1; j>=0; j--){
		printf("%c", arr[j]);
	}
	printf("\n");
}
