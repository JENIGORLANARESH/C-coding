#include<stdio.h>
#include<stdint.h>

#define swap(val) \
	( 	( ( (uint32_t)(val) & 0x000000FFUL) << 24) | \
		( ( (uint32_t)(val) & 0x0000FF00UL) << 8 ) | \
		( ( (uint32_t)(val) & 0x00FF0000UL) >> 8 ) | \
		( ( (uint32_t)(val) & 0xFF000000UL) >> 24)  \
	 )

int main(void){
	uint32_t val = 0xAABBCCDDUL;
	printf("Original value :  %X \n", val);
	uint32_t n = swap(val);
	printf("Swapped 32 bit value : %X \n", n); 
	return 0;
}
