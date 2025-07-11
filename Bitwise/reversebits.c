#include<stdio.h>
int reverse(int n);
int count(int n);
int decToBinary(int n);

int main(void){
	int n;
	printf("Enter n : \n");
	scanf("%d", &n);
	printf("Original Binary : %d\n", decToBinary(n));
	printf("Reversed Binary : %d\n", decToBinary(reverse(n)));
	return 0;
}

int reverse(int n){
	int t = count(n);
	int result = 0;
	while(t > 0){
		result = result << 1;
		int a = n & 1;
		result = result | a;
		n = n>>1;
		t--;
	}
	return result;
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

