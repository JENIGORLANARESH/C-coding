#include <stdio.h>
int sum(int a);

int main(void)
{	
	int num;
	printf("Enter a num : ");
	scanf("%d", &num);
	printf("sum of digits in %d is %d\n", num, sum(num));
}

int sum(int a){
	int s = 0;
	while(a > 0){
		int d = a % 10;
		s = s + d;
		a = a/10;
	}
	return s;
}
