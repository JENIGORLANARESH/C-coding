#include <stdio.h>

int main(void){
	int A, B;
	printf("Enter A & B : ");
	scanf("%d %d", &A, &B);

	int diff = A ^ B;

	int difference_bits = 0;

	while(diff > 0){
		if(diff & 1){
			difference_bits++;
		}
		diff = diff>>1;
	}

	printf("Number of bits need to flip to convert A to B : %d\n", difference_bits);

	return 0;
}
