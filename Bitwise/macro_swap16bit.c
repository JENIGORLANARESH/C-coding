
#include<stdio.h>
#include<stdint.h>

#define swap(val) \
	( ((val & 0x00FF) << 8) | \
       	 ( (val >> 8) & 0x00FF  ) )


int main(void){
	uint16_t n = 0xABCD;
	printf("Original number : %b  : 0x%04X\n", n, n);
	uint16_t n1 = swap(n);
	printf("Swaped number : %b : %X\n", n1, n1);
	return 0;
}
