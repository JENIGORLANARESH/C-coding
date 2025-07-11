#include <stdio.h>
int sum(int a);
int main(void){
	int num;
	printf("Enter a num : ");
	scanf("%d", &num);
	printf("Sum from 0 to %d\n", sum(num));
	return 0;
}

int sum(int a){
	if(a > 0){
		return a + sum(a - 1);
	}
	else return 0;
}
