#include <stdio.h>

int main(void){
	int n;
	printf("Enter number of rows for half diamond : ");
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		for(int j=1; j<n-i; j++)
			printf(" ");

		printf("*");
		for(int k=0; k< (2*i-1); k++){
			printf(" ");
		}
		if(i)
			printf("*");
		printf("\n");
	}

	for(int i=n-1; i>0; i--){
		for(int j=1; j<=n-i; j++){
			printf(" ");
		}
		

		for(int k=1; k<=2*i-1; k++){
			if(k==1 || k == 2*i-1)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");			
	}

	return 0;
}
