#include<stdio.h>
void hasalternativebits(int n);
int decToBinary(int n);

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	printf("n = %d\n", decToBinary(n));
	hasalternativebits(n);
	return 0;
}

void hasalternativebits(int n){
	int t = n ^ (n>>1);
	if( (t & (t+1)) == 0){
		printf("Has alternatives\n");
	}
	else printf("Does not have alternative\n");
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

