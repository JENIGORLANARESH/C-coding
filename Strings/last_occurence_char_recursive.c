#include <stdio.h>
#include <string.h>


int last_occurence(char *str, char ch, int index){
	if(*str == '\0')
		return -1;

	int res = last_occurence(str+1, ch , index+1);
	if(res != -1)
		return res;
	if(*str == ch)
		return index;

	return -1;
}


int lastOccurence(char *str, char ch, int index){
	if(index == -1)
		return -1;
	if(str[index] == ch)
		return index;
	return lastOccurence(str, ch, index-1);
}

int main(void){
	char str[1000];
	char ch;
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter ch : ");
	scanf("%c", &ch);

	//int n = lastOccurence(str, ch, strlen(str)-1);
	int n = last_occurence(str, ch, 0);

	if(n == -1)
		printf("%c Not found in str.\n", ch);
	else
		printf("%c found at index : %d\n", ch, n);

	return 0;
}
