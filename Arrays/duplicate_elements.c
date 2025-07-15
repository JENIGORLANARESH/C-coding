#include <stdio.h>
void print(int a, int array[a]);

int main(void){

	int array[12] = {1, 2, 2, 2, 3, 4, 5, 5, 6, 7, 8, 8};
	print(12, array);
	return 0;
}

void print(int a, int array[a]){
	int present = array[0];
	int temp = 1;
	for(int i=1; i<a; i++){
		if(array[i] == present){
			temp++;
		}
		else{
			if(temp > 1){
				printf("%d : %d\n", present, temp);
			}
			present = array[i];
			temp = 1;
		}
	}
	if(temp > 1){
		printf("%d : %d", present, temp);
	}
	printf("\n");
}

