#include <stdio.h>

int count(int *arr, int n);

int main(void){
	int n;
	printf("Enter array length : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements in array : \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Number of duplicates : %d\n", count(arr, n));

	return 0;
}

int count(int *arr, int n){
        int c = 0, isduplicate = 0;;
        for(int i=0; i<n; i++){
                if(arr[i] == -1) continue;
                for(int j=i+1; j<n; j++){
                        if(arr[i] == arr[j] && arr[j] != -1){
                                isduplicate = 1;
                                arr[j] = -1;
                        }
                }
                if(isduplicate)
                {
                        c++;
                        isduplicate = 0;
                        arr[i] = -1;
                }
        }
        return c;
}

