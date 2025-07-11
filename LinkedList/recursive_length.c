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
int length(Node *current);

int main(void){
	Node *start = NULL;
	int n;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	start = create(start, n);
	display(start);
	int s = length(start);
	printf("Number of element %d\n", s);
	return 0;
}

int length(Node *current){
	if(current == NULL) return 0;
	return 1 + length(current -> link);
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

