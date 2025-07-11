#include<stdio.h>
void swap(int n);

int main(void){
	int n;
	printf("Enter n :\n");
	scanf("%d", &n);
	swap(n);
	return 0;
}

void swap(int n){
	int odds = n & 0xAAAAAAAA;
	int even = n & 0x55555555;
	odds = odds>>1;
	even = even<<1;
	n =  (odds | even);
	printf("%d\n", n);
}
