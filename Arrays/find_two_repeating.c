#include <stdio.h>

int main(void){
	int n;
	printf("Enter n (elements in arr 1 to n) : ");
	scanf("%d", &n);
	int arr[n+2];
	int freq[n+1];
	for(int i=0; i<n+1; i++)
		freq[i] = 0;
	printf("Enter elements including two repeated between 1 to %d\n", n);
	for(int i=0; i<n+2; i++){
		scanf("%d", &arr[i]);
		freq[arr[i]]++;
	}

	printf("Repeating elements are : \n");
	for(int i=1; i<n+1; i++){
		if(freq[i] > 1){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
