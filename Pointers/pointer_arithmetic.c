#include <stdio.h>

int main(void){
	int arr[] = { 1, 2, 3, 4, 5};
	int *p = arr;

	printf("*p = %d\n", *p);
	for(int i=0; i<5; i++){
		printf("*(p+%d) = %d\n", i, *(p+i) );
	}
	
	printf("Initial pointer address = %p\n", (void *)p);
	p++;
	printf("After p++ , address = %p\n", (void *)p);
	p = p + 2;
	printf("After p = p + 2, address = %p\n", (void *)p);
	p--;
	printf("After p--, address = %p\n", (void *)p);

	int *start = &arr[0];
	int *end = &arr[4];
	printf("Pointer difference end - start = %ld\n", end - start);
	return 0;
}
