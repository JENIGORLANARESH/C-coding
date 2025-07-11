#include<stdio.h>
#include<string.h>

int main(void){
	char str1[100];
	char str2[100];
	printf("Enter str2 : ");
	scanf("%s", str2);

	strcpy(str1, str2);

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	return 0;
}
