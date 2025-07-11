#include <stdio.h>
#include <string.h>

int main(void){
	char arr[100];
	printf("Enter string : \n");
	fgets(arr, 100, stdin);

	char *t;
	t = strtok(arr, " ");
	while(t != NULL){
		printf("%s    %s\n", t , reverse(t));
		t = strtok(NULL, " ");
	}
	return 0;
}

char *reverse(char *t){
	int len = strlen(t);
	int i=0, j=len-1;
	while(i < j){
		char *p = t[j];
		t[j] = t[i];
		t[i] = p;
	}
	return t;
}

