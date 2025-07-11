#include <stdio.h>
#include <string.h>
int fist_NR_char(char *str);

int main(void){
	char str[100];
	printf("Enter the string : \n");
	fgets(str, 100, stdin);
	int n = strcspn(str, "\n");
	str[n] = '\0';

	printf("%d\n", fist_NR_char(str));

	return 0;
}

int fist_NR_char(char *str){
	int i,j, end = strlen(str)-1;
	for(i=0; i<=end; i++){
		for(j=0; j<=end; j++){
			if(str[i] == str[j] && i!=j){
				break;
			}
		}
		if(j>end) return i;
	}
	return -1;
}
