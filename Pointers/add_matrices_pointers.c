#include <stdio.h>


int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int m1[n][n];
	int m2[n][n];
	printf("Enter elements of m1 : \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &m1[i][j]);
		}
	}
	printf("Enter elements of m2 : \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &m2[i][j]);
		}
	}

	int (*p1)[n] = m1;
	int (*p2)[n] = m2;

	int m[n][n];

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			m[i][j] = *(*(p1+i)+j) + *(*(p2+i)+j) ;
		}
	}

	printf("RESULT \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", m[i][j]); 
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
