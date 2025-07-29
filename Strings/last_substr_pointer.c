#include <stdio.h>
#include <string.h>

char *lastsubstring(char *str, char *sub){
	if(sub == NULL || str == NULL || *sub == '\0')
		return NULL;

	char *last = NULL;
	
	for(char *ptr = str; *ptr ; ptr++){
		char *a = ptr;
		char *b = sub;
		while( *a && *b && (*a == *b) ){
			a++;
			b++;
		}
		if( *b == '\0'){
			last = ptr;
		}
	}	
	return last;
}

int main(void){
	char str1[100];
	char str2[100];
	printf("Enter str1 : ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	printf("Enter str2 : ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';

	char *result = lastsubstring(str1, str2);

	if(result)
		printf("Last occurence of \"%s\" starts at : \"%s\"\n", str2, result);
	else
		printf("Substring not found\n");
	return 0;
}
