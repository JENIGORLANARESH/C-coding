#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int info;
	struct node *link;
}Node;

Node *create(Node *start, int n);
Node *addatbeg(Node *start, int data);
Node *addatend(Node *start, int data);
void display(Node *start);
Node *recursiveglobal(Node *start);
Node *recursive(Node *current, Node *prev);

Node *ptr, *prev = NULL, *next;

int main(void){
	Node *start = NULL;
	int n;
	printf("Enter number of elements : ");
	scanf("%d" , &n);
	start = create(start, n);
	display(start);
	start = recursive(start, NULL);
	display(start);
	return 0;
}


Node *recursive(Node *current, Node *prev){
	if(current == NULL) return prev;
	Node *next = current -> link;
	current -> link = prev;
	prev = current;
	return recursive(next, prev);
}


Node *recursiveglobal(Node *start){
	if(start == NULL) return prev;
	ptr = start;
	next = ptr -> link;
	ptr -> link = prev;
	prev = ptr;
	
	return recursiveglobal(next);
}


Node *create(Node *start, int n){
	int data;
	printf("Enter element : ");
	scanf("%d", &data);
	start = addatbeg(start, data);
	for(int i=2; i<=n; i++){
		printf("Enter element : ");
		scanf("%d", &data);
		start = addatend(start, data);
	}
	return start;
}

Node *addatbeg(Node *start, int data){
	Node *temp;
	temp = (Node *)malloc(sizeof(Node));
	temp -> info = data;
	temp -> link = start;
	start = temp;
	return start;
}

Node *addatend(Node *start, int data){
	Node *ptr, *temp;
	temp = (Node *)malloc(sizeof(Node));
	temp -> info = data;
	temp -> link = NULL;
	ptr = start;
	while(ptr -> link != NULL){
		ptr = ptr -> link;
	}
	ptr -> link = temp;
	return start;
}

void display(Node *start){
	Node *ptr = start;
	while(ptr != NULL){
		printf("%d -> ", ptr -> info);
		ptr = ptr -> link;
	}
	printf("\n");
}





