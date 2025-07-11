#include <stdio.h>
#include <string.h>

// strspn(str1, str2)  -->  returns length inial segment of str1 that consists entirely characters from str2
// strcspn(str1, str2) -->  return length of initial segment of str1 that doesnot contain any character from str2


int main(void){
	char str[100], a[100], b[100];

	printf("Enter str : ");
	fgets(str, 100, stdin);
	printf("Enter a and b : \n");
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);

	printf("Length of initial segment that consists characters entirely from a : %zu\n", strspn(str, a));
	printf("Length of initial segment that doesn't consists any characters from b : %zu\n", strcspn(str, b));

	return 0;
}
