#include <stdio.h>
#include <stdint.h>

uint32_t swap(uint32_t n);
int decimalToBinaryInt(int n);

int main(void){
	unsigned int n;
	printf("Enter n : \n");
	scanf("%d", &n);
	printf("Before swap : %d\n", decimalToBinaryInt(n));
	uint32_t temp = swap(n);
	printf("After swap : %d\n", decimalToBinaryInt(temp));
	return 0;
}

uint32_t swap(uint32_t n){
	uint32_t even_places = 0x55555555;
	uint32_t odd_places = 0xAAAAAAAA;
	uint32_t odd = n & odd_places;
	uint32_t even = n & even_places;
	odd = odd >> 1;
	even = even << 1;
	return (odd | even);
}


int decimalToBinaryInt(int n) {
    int binary = 0, place = 1;

    while (n > 0) {
        int remainder = n % 2;
        binary += remainder * place;
        place *= 10;
        n /= 2;
    }

    return binary;
}



