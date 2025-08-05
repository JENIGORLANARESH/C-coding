#include <stdio.h>
#include <string.h>


int check_start(char *str, char *sub){
	char *a = str;
	char *b = sub;
	while(*b){
		if(*a != *b)
			return 0;
		a++;
		b++;
	}
	return 1;
}


int check_end(char *str, char *sub){
	int lenstr = strlen(str);
	int lensub = strlen(sub);
	int temp = lenstr - lensub;
	if(lenstr < lensub) return 0;

	return strcmp(str + temp, sub) == 0;
}


int main(void){
	char str[1000];
	char sub[100];

	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter sub string : ");
	fgets(sub, sizeof(sub), stdin);
	sub[strcspn(sub, "\n")] = '\0';
	
	int start = check_start(str, sub);
	int end = check_end(str, sub);

	if(start){
		printf("Substring is Present at Start\n");
	}
	else{
		printf("Substring is Not present at Start\n");
	}

	if(end){
		printf("Substring is Present at End\n");
	}
	else{
		printf("Substring is Not present at End\n");
	}

	return 0;
}
