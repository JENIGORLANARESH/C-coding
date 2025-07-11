#include <stdio.h>
void display(int n);

int main(void){
	int n;
	printf("Enter a num : ");
	scanf("%d", &n);
	display(n);
	printf("\n");	
}


void display(int n){
	if(n > 0){
		printf("%d ", n);
		display(n-1);
	}
	return;
}
