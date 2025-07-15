#include <stdio.h>
#include <string.h>

int main(void){
	int n;
	printf("Enter length of array : ");
	scanf("%d", &n);
	getchar();	// consumes '\n'
	char str[n+1];
	printf("Enter elements : \n");
	fgets(str, n+1, stdin);
	
	int i=0;
	while(str[i] != '\0' ){
		printf("Character : %c -> ASCII : %d\n", str[i], str[i]);
		i++;
	}

	printf("\n");
	return 0;
}


