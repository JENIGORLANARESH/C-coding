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

Node *rotateRight(Node *start, int k);

int main(void){
	int n;
	Node *start = NULL;
	printf("Enter number of elements in Linked List : ");
	scanf("%d", &n);
	start = create(start, n);
	display(start);
	
	int k;
	printf("Enter k : ");
	scanf("%d", &k);

	start = rotateRight(start, k);

	display(start);

	return 0;
}


Node* rotateRight(Node* start, int k) {
    if (start == NULL || start->link == NULL || k < 1) return start;

    int len = 0;
    Node *ptr = start;
    while (ptr != NULL) {
        len++;
        ptr = ptr->link;
    }

    k = k % len;
    if (k == 0) return start;

    int index = len - k;
    Node *temp = start;
    for (int i = 1; i < index; i++) {
        temp = temp->link;
    }

    ptr = temp->link;
    temp->link = NULL;

    Node *p = ptr;
    while (p->link != NULL) {
        p = p->link;
    }

    p->link = start;
    return ptr;
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
