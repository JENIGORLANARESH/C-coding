#include <stdio.h>

void swap(int *b, int *c){
    int temp = *b;
    *b = *c;
    *c = temp;
}

int main(void){
        
    int arr[10] = {5,6,3,2,1,8,9,6,3,4};
    
    for(int i=0; i<10; i++){
        for(int j=0; j<10-i-1; j++){
            if(*(arr+j) > *(arr+j+1)){
                swap(arr+j, arr+j+1);
            }
        }
    }
    
    for(int i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    return 0;
}
