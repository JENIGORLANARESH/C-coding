#include <stdio.h>
#include <string.h>


void removeCommon(char *a, char *b){
	int A[128] = {0};
	int B[128] = {0};
	for(int i=0; i<strlen(a); i++){
		A[a[i]]++;
	}
	for(int i=0; i<strlen(b); i++){
		B[b[i]]++;
	}
	
	int i=0,j=0;
	for( ; a[j]; j++){
		if( !B[a[j]] ){
			a[i] = a[j];
			i++;
		}
	}
	a[i] = '\0';

	i=0;
	for(j=0; b[j]; j++){
		if( !A[b[j]] ){
			b[i] = b[j];
			i++;
		}
	}
	b[i] = '\0';
}


int main(void){
	char str1[1000];
	char str2[1000];
	printf("Enter str1 : ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	printf("Enter str2 : ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';

	removeCommon(str1, str2);
	
	printf("Str1 = %s\n", str1);
	printf("Str2 = %s\n", str2);
	return 0;
}
