#include<stdio.h>
int checkbit(int n, int i);
int main(void){
	int n,i;
	printf("Enter n : \n");
	scanf("%d", &n);
	printf("Enter bit to be checked i : \n");
	scanf("%d", &i);

	if( checkbit(n,i)){
		printf("%dth bit of %d is SET\n", i, n);
	}
	else{
		printf("%dth bit of %d is NOT SET\n", i, n);
	}

	return 0;
}

int checkbit(int n, int i){
	int b = 1 << i;
	if( (n&b) == 0 ) return 0;
	else return 1;
}
