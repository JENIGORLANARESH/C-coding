#include <stdio.h>

int main(void){
	int n1, n2;
	printf("Enter length of first array : ");
	scanf("%d", &n1);
	int arr1[n1];
	printf("Enter elements in first array : \n");
	for(int i=0; i<n1; i++){
		scanf("%d", &arr1[i]);
	}

	printf("Enter length of second array : ");
	scanf("%d", &n2);
	int arr2[n2];
	printf("Enter elements in second array : \n");
	for(int i=0; i<n2; i++){
		scanf("%d", &arr2[i]);
	}


	int total = n1 + n2;
	int temp[total];
	int temp2[total];
	int i=0;
	for( ; i<n1; i++){
		temp[i] = arr1[i];
		temp2[i] = arr1[i];
	}
	for(int j=0; j<n2; j++){
		temp[i] = arr2[j];
		temp2[i] = arr2[j];
		i++;
	}

	printf("Union : \n");
	int u = 0;
	for(int j=0; j<total-1; j++){
		int d = 0;
		for(int k=j+1; k<total; k++){
			if(temp[j] == temp[k] && temp[k] != -1){
				d++;
				temp[k] = -1;	
			}
		}
		if(d>0){
			u++;
			printf("%d ", temp[j]);
		}
	}
	if(u == 0) printf("No common elements in arrays.\n");

	printf("\nIntersection : \n");
	u = 0;
	for(int j=0; j<total; j++){
		int d = 0;
		for(int k=j; k<total; k++){
			if(temp2[j] == temp2[k] && temp2[j] != -1){
				d++;
				if(d > 1) temp2[k] = -1;
			}
		}

		if(d == 1){
			printf("%d ", temp2[j]);
			u++;
		}
	}
	if(u == 0) printf("No different elements in arrays.\n");

	printf("\n");
	return 0;	
}
