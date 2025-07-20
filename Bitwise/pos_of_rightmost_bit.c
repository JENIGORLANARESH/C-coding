#include <stdio.h>


int position(int n){
	if(!n) return 0;
	int pos = 1;
	while( (n&1) == 0){
		pos++;
		n = n >> 1;
	}
	return pos;
}

void binary(int n){
	int started = 0;
	for(int i=31; i>=0; i--){
		int bit = (n>>i)&1;
		if(bit) started = 1;
		if(started) printf("%d", bit);
	}
	if(!started) printf("0");
	printf("\n");
}

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	binary(n);
	printf("Position = %d\n", position(n));
	printf("Index = %d\n",  position(n)-1);
	return 0;
}


