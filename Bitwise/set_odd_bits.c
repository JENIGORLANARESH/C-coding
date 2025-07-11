#include<stdio.h>
int set(int n);
int countBits(int n);

int main(void){
	int n;
	printf("Enter N : ");
	scanf("%d", &n);
	printf("After setting odd bits n = %d\n", set(n));
	return 0;
}


int set(int n){
	int c = countBits(n);
	int mask = 0;
	for(int i=1; i<c; i+=2){
		mask = mask | (1<<i);
	}
	return mask | n;
}



int countBits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n >>= 1;
    }
    return count;
}
