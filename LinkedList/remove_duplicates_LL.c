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

Node *remove_duplicates(Node *start);

int main(void){
	int n;
	Node *start = NULL;
	printf("Enter number of elements in Linked List : ");
	scanf("%d", &n);
	start = create(start, n);
	display(start);
	
	start = remove_duplicates(start);

	display(start);

	return 0;
}


Node *remove_duplicates(Node *start){
	Node *ptr1 = start;
	while(ptr1 != NULL){
		Node *ptr2 = ptr1;
		while(ptr2 -> link != NULL){
			if(ptr1->info == ptr2->link->info){
				Node *duplicate = ptr2 -> link;
				ptr2 -> link = ptr2 -> link -> link;
				free(duplicate);
			}
			else ptr2 = ptr2 -> link;
		}
		ptr1 = ptr1 -> link;
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
	Node *temp, *ptr;
	ptr = start;
	temp = (Node *)malloc(sizeof(Node));
	temp -> info = data;
	temp -> link = NULL;
	while(ptr -> link != NULL){
		ptr = ptr -> link;
	}
	ptr -> link = temp;
	return start;
}


void display(Node *start){
	Node *ptr = start;
	while(ptr != NULL){
		printf("%d ", ptr -> info);
		ptr = ptr -> link;
	}
	printf("\n");
}
