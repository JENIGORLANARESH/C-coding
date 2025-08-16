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
Node *delete_recursive_end(Node *start);

int main(void){
	Node *start = NULL;
	int n, item;
	printf("Enter number of elements : ");
	scanf("%d" , &n);

	start = create(start, n);
	printf("Before : \n");
	display(start);
	
	start = delete_recursive_end(start);
	
	printf("After : \n");
	display(start);

	return 0;
}

Node *delete_recursive_end(Node *start){
	if(start == NULL){
		return start;
	}
	else if(start -> link == NULL){
		free(start);
		return NULL;
	}
	else if(start -> link -> link == NULL){
		Node *temp = start -> link;
		start->link = NULL;
		free(temp);
	}
	else{
		start->link = delete_recursive_end(start->link);
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





