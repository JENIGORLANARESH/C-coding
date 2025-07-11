#include <stdio.h>
#include <stdlib.h>

struct node{
	char ch;
	int num;
	char a;
};

int main(void){
	struct node temp;
	struct node *a = &temp;

	int len =  (char *)(a+1) - (char *)a;

	printf("%d\n", len);
	return 0;
}


