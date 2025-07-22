#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch){
	if(top < MAX - 1)
		stack[++top] = ch;
}

char pop(){
	if(top >= 0){
		return stack[top--];
	}
	return '\0';
}

int ismatching(char open, char close){
	return (open == '(' && close == ')') ||
		(open == '[' && close == ']') ||
		(open == '{' && close == '}') ||
		(open == '<' && close == '>');
}

int main(void){
	char str[100];
	printf("Enter str : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	
	
	for(int i = 0; str[i]; i++){
		char ch = str[i];
		if(ch == '(' || ch == '[' || ch == '{' || ch == '<'){
			push(ch);
		}
		else if(ch == ')' || ch == ']' || ch == '}' || ch == '>'){
			char open = pop();
			int valid = ismatching(open , ch);
			if(!valid){
				printf("Not valid\n");
				return 0;
			}
		}
	}

	if(top == -1) printf("Valid\n");
	else printf("Invalid\n");
	return 0;
}




