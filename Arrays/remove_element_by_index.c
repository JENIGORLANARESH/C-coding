#include <stdio.h>

void remove_element(int *arr, int n, int index){
	int t = 0;
	for(int i=0; i<n; i++){
		if(i >= index){
			arr[i] = arr[i+1];
		}
		
	}
	n--;
}

void display(int *arr, int n){
	int i=0;
	while(i<n){
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

int main(void){	
	int index, len;
	printf("Enter len : " );
	scanf("%d", &len);
	int arr[len];

	printf("Enter element in array : \n");
	for(int i=0; i<len; i++){
		scanf("%d", &arr[i]);
	}
	display(arr, len);

	printf("Enter index to be removed : ");
	scanf("%d", &index);
	remove_element(arr, len, index);
	len--;
        display(arr, len);	
	return 0;
}
