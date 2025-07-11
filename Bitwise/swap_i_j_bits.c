#include<stdio.h>

int swap(unsigned int n, int i, int j);

int main(void){
	int i, j;
	unsigned int n;
	printf("Enter n : \n");
	scanf("%d", &n);
	printf("Enter i & j bits to be swaped in n : \n");
	scanf("%d %d", &i, &j);
	printf("After swapping n = %d\n", swap(n, i, j));
	return 0;
}

int swap(unsigned int n, int i, int j){
	if( ((n>>i) & 1) != ((n>>j) & 1) ){
		n = n ^ (1 << i);
		n = n ^ (1 << j);
	}
	return n;
}
