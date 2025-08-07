#include <stdio.h>

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int m1[n][n];
	int m2[n][n];
	int result[n][n];
	int (*p1)[n] = m1;
	int (*p2)[n] = m2;
	int (*p)[n] = result;

	printf("Enter elements for m1 : \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", (*(p1+i)+j));
		}
	}

	printf("Enter elements for m2 : \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", (*(p2+i)+j));
		}
	}


	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			p[i][j] = 0;
			for(int k=0; k<n; k++){
				p[i][j] = p[i][j] +  (*(*(p1+i)+k)) * (*(*(p2+k)+j));
			}		
		}
	}

	printf("RESULT \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", result[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
