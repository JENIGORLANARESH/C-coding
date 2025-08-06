#include <stdio.h>

int main(void){
	int arr[][3][3] = {
			{
				{1,1,1}, {2,2,2}, {3,3,3}
			},
			{
				{4,4,4}, {5,5,5}, {6,6,6}
			},
			{
				{7,7,7}, {8,8,8}, {9,9,9}
			}
		};

	int (*p)[3][3] = arr;

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<3; k++){
				printf("*(*(*(p+i)+j)+k) = %d\n", *(*(*(p+i)+j)+k) );
			}
		}
	}

	return 0;
}
