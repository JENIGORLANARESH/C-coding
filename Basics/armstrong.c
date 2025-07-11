#include <stdio.h>
#include <math.h>
int arm(int n);

int main(void){
	int n; 
	printf("Enter a number : \n");
	scanf("%d", &n);
	if(arm(n)){
		printf("%d is an Armstrong number.\n", n);
	}
	else{
		printf("%d is not an Armstrong number.\n", n);
	}
	return 0;
}

int arm(int n){
	int a=0, temp = n, d=0;
	while(temp > 0){
		d++;
		temp /= 10;
	}
	temp = n;
	while(temp>0){
		int rem = temp % 10;
		a = a + (int)pow(rem,d);
		temp /= 10;
	}

	if(a == n) return 1;
	else return 0;
}
