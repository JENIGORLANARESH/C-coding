#include <stdio.h>

int binary(int n){
	int mul = 1;
	int binary = 0;
	while(n>0){
		int rem = n % 2;
		binary = binary + mul * rem;
		n = n/2;
		mul = mul * 10;
	}
	//printf("binary = %d\n", binary);
	return binary;
}


int len(int n){
	int l = 0;
	while(n>0){
		n = n>>1;
		l++;
	}
	return l;
}


int toggleodd(int n){
	int l = len(n);
	int t = 1;
	for(int i=0; i<l; i++){
		if( (i%2) != 0){
			n = n ^ t;
		}
		t = t<<1;
	}
	return n;
}

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	printf("%d in binary = %d\n", n, binary(n));
	int t = toggleodd(n);
	printf("After toggle n = %d , in binary = %d\n", t, binary(t));
	return 0;
}
