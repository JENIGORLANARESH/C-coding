#include <stdio.h>

int main(void){
	int arr[5] = {1,2,3,4,5};
	int (*ptr)[5];
	ptr = &arr;	// ptr is a pointer to an array of 5 elements not to a single element in array;
			// ptr contains addresss of an entire array.
	for(int i=0; i<5; i++){
		printf("(*ptr)[%d] = %d\n", i, (*ptr)[i]);
	}
	return 0;
}
