#include <stdio.h>
#include <string.h>

void swap(char *i, char *j){
	char temp = *i;
	*i = *j;
	*j = temp;
}

void permutations(char *str, int start, int end){
	if(start == end)
		printf("%s\n", str);
	else{
		for(int i=start; i<=end; i++){
			swap(&str[i], &str[start]);		// swap current index with start
			permutations(str, start+1, end);	// recursive for the rest
			swap(&str[i], &str[start]);		// backtrack
		}
	}
}

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	permutations(str, 0, strlen(str)-1);
	return 0;
}
