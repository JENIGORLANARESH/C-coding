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
Node *insert_recursive_end(Node *start, int item);

int main(void){
	Node *start = NULL;
	int n, item;
	printf("Enter number of elements : ");
	scanf("%d" , &n);

	start = create(start, n);
	display(start);
	
	printf("Enter item to be inserted at end : ");
	scanf("%d", &item);

	start = insert_recursive_end(start, item);

	display(start);

	return 0;
}

Node *insert_recursive_end(Node *start, int item){
	if(start == NULL){
		Node *temp = (Node *)malloc(sizeof(Node));
		temp -> info = item;
		temp -> link = NULL;
		return temp;
	}
	else if(start -> link == NULL){
		Node *temp = (Node *)malloc(sizeof(Node));
		temp -> info = item;
		temp -> link = NULL;
		start -> link = temp;
	}
	else{
		start->link = insert_recursive_end(start->link, item);
	}
	return start;
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
	printf("NULL\n");
}





