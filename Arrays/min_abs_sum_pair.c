#include <stdio.h>
#include <stdlib.h> // abs()
#include <limits.h>

int main(void){
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int sum = INT_MAX;
	int a,b;

	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			int s = arr[i] + arr[j];
			if( abs(s) < abs(sum) ){
				sum = s;
				a = arr[i];
				b = arr[j];
			} 	
		}
	}

	printf("Pari : %d , %d , Sum = %d\n", a, b, sum);

	return 0;
}


