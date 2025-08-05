#include <stdio.h>
#include <string.h>

int first_occurence(char *str, char ch){
	if(*str == '\0'){
		return -1;
	}
	if(*str == ch){
		return 0;
	}

	int res = first_occurence(str+1, ch);

	if(res == -1){
		return -1;
	}
	else{
		return 1 + res;
	}
}

int firstOccurence(char *str, char ch, int index){
	if(str[index] == ch)
		return index;
	if(str[index] == '\0')
		return -1;
	return firstOccurence(str, ch, index+1);
}

int main(void){
	char str[1000];
	char ch;
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter ch : ");
	scanf("%c", &ch);

	//int n = first_occurence(str, ch);
	int n = firstOccurence(str, ch, 0);

	if(n == -1)
		printf("%c Not found in str.\n", ch);
	else
		printf("%c found at index : %d\n", ch, n);

	return 0;
}
