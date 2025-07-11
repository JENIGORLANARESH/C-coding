#include<stdio.h>
#define MAX 50
int binary(int n, int item, int array[]);

int main(void){
	int arr[MAX];
	int n,item,temp;
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	printf("Enter number to be searched : ");
	scanf("%d", &item);
	printf("Enter elements (ascending order) : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	temp = binary(n,item,arr);
	if(temp == -1) printf("%d does not found in array\n",item);
	else  printf("Number %d found at index %d\n",item,temp);
	return 0;
}

int binary(int n, int item, int array[]){
	int low=0, up = n-1, mid;
	while(low <= up){
		mid = (low + up)/2;
		if(item < array[mid]){
			up = mid - 1;
		}
		else if(item > array[mid]){
			low = mid + 1;
		}
		else return mid;
	}
	return -1;
}
