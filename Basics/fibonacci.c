#include <stdio.h>
void fib(int n);

int main(void){
	int n;
	printf("Enter n : \n");
	scanf("%d", &n);
	fib(n);
	return 0;
}

void fib(int n){
	int fi[2*n];
	fi[0]=0;
	fi[1]=1;
	printf("%d ", fi[0]);
	if(n >= 1){
		printf("%d ", fi[1]);
	
		for(int i=2; i<=n; i++){
			fi[i] = fi[i-1] + fi[i-2];
			printf("%d ", fi[i]);
		}

	}
	printf("\n");
	return;
}
