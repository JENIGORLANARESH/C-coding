#include <stdio.h>
#define MAX 15

int main(void){
	int i,j,n;
	int arr[MAX][MAX];
	printf("Enter n : \n");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			if(i==j || j==0){
				arr[i][j] = 1;
			}
			else{
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			}
		}
	}


	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
