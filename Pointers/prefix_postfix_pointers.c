#include <stdio.h>


int main(void){
	int arr[] = {1,2,3};
	int *p = &arr[0];
	printf("*p = %d\n", *p);
	p++;
	printf("*p++ = %d\n", *p);
	++p;
	printf("++*p = %d\n", *p);
	p--;
	printf("*p-- = %d\n", *p);
	--p;
	printf("--*p = %d\n", *p);

	return 0;
}
