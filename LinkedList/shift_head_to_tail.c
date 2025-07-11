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
Node *shift_head_to_tail(Node *start);
Node *shift_tail_to_head(Node *start);

int main(void){
	int n;
	Node *start = NULL;
	printf("Enter number of elments : ");
	scanf("%d", &n);
	start = create(start, n);
	display(start);
	start = shift_head_to_tail(start);
	printf("After shifting head to tail.\n");
	display(start);
	printf("After shifting tail to head.\n");
	start = shift_tail_to_head(start);
	display(start);
	return 0;
}


Node *shift_tail_to_head(Node *start){
	Node *temp, *ptr;
	ptr = start;
	while(ptr -> link -> link != NULL){
		ptr = ptr -> link;
	}
	temp = ptr -> link;
	ptr -> link = NULL;
	temp -> link = start;
	start = temp;
	return start;
}


Node *shift_head_to_tail(Node *start){
	if(start -> link == NULL) return start;
	Node *temp = start;
	start = start -> link;
	temp -> link = NULL;
	Node *ptr = start;
	while(ptr -> link != NULL){
		ptr = ptr -> link;
	}
	ptr -> link = temp;
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
        printf("\n");
}


