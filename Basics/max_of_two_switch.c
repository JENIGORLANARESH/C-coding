#include<stdio.h>

int main(void){
	int a, b;
	printf("Enter a, b : ");
	scanf("%d %d", &a, &b);

	switch(a>b){
		case 1:
			printf("a is big\n");
			break;
		case 0:
			switch(a==b){
				case 1:
					printf("a == b\n");
					break;
				case 0:
					printf("b is big\n");
					break;
			}
	}
	return 0;
}
