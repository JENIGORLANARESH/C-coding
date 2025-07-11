#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	printf("Enter string : ");
	fgets(str, 100, stdin);

	char ch, *p, *q;
	
	printf("Enter char c : ");
	scanf("%c", &ch);

	p = strchr(str, ch);
	q = strrchr(str, ch);

	printf("from first occurence :  %s\n", p);
	printf("from last occurence : %s\n", q);
	

return 0;	

}
