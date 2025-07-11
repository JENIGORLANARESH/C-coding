#include <stdio.h>
int factorial(int a);
int main(void){
	int fact;
	printf("Enter a num : ");
	scanf("%d", &fact);
	fact = factorial(fact);
	printf("Factorial : %d\n", fact);

}

int factorial(int a){
	if(a == 0) return 0;	
	if(a > 1){
		return a * factorial(a-1);
	}
	else return 1;
}
