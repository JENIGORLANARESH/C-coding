#include<stdio.h>
#include<math.h>

int rotateleft(int n, int r);
int count(int n);
int decToBinary(int n);

int main(void){
	int n, r;
	printf("Enter n : ");
	scanf("%d", &n);
	printf("Enter number of digits to rotate left : ");
	scanf("%d", &r);
	printf("Original : %d\n", decToBinary(n));
	printf("After rotation : %d\n", decToBinary(rotateleft(n,r)));
	return 0;
}


int rotateleft(int n, int r){
	int c = count(n) - r;
	int temp = (1<<c) - 1;
	int t = ((n & temp) << r) | (n>>c);
	return t;
}


int count(int n){
	int c = 0;
	while(n>0){
		c++;
		n = n>>1;
	}
	return c;
}

int decToBinary(int n) {
    int binary = 0, place = 1;

    while (n > 0) {
        int rem = n % 2;
        binary = binary + (rem * place);
        place = place * 10;
        n = n / 2;
    }

    return binary;
}
