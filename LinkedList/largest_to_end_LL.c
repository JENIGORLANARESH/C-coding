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
Node *largeatend(Node *start);

int main(void){
	int n;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	Node *start = NULL;
	start = create(start, n);
	printf("Before : ");
	display(start);
	printf("After : ");
	start = largeatend(start);
	display(start);
	return 0;
}

Node *largeatend(Node *start){
	Node *ptr, *temp;
	
	for(ptr = start, temp = start -> link; temp !=NULL; temp = temp -> link, ptr = ptr -> link){
		if(temp -> info < ptr -> info){
			int data = temp -> info;
			temp -> info = ptr -> info;
			ptr -> info = data;
		}
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
	Node *ptr;
	ptr = (Node *)malloc(sizeof(Node));
	ptr -> info = data;
	if(start == NULL){
		ptr -> link = NULL;
		start = ptr;
		return start;
	}
	ptr -> link = start -> link;
	start = ptr;
	return start;
}

Node *addatend(Node *start, int data){
	Node *ptr, *temp;
	ptr = start;
	while(ptr -> link != NULL){
		ptr = ptr -> link;
	}
	temp = (Node *)malloc(sizeof(Node));
	temp -> info = data;
	temp -> link = ptr -> link;
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
