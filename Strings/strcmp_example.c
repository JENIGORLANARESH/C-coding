#include <stdio.h>
#include <string.h>

int main(void){
	char str1[100];
	char str2[100];

	printf("Enter str1: ");
    	fgets(str1, sizeof(str1), stdin);

    	printf("Enter str2: ");
    	fgets(str2, sizeof(str2), stdin);

   	// Remove trailing newline from fgets
    	str1[strcspn(str1, "\n")] = '\0';
	str2[strcspn(str2, "\n")] = '\0';


	int t = strcmp(str1, str2);
	if(t > 0) printf("str1 > str2\n");
	else if(t < 0) printf("str1 < str2\n");
	else printf("str1 == str2\n");

	return 0;
}
