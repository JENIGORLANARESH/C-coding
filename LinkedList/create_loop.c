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

Node *createloop(Node *start, int pos);
void findloop(Node *start);

int main(void){
	Node *start = NULL;
	int n, pos;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	start = create(start, n);
	display(start);
	printf("Enter starting point of loop : ");
	scanf("%d", &pos);
	printf("\n");
	start = createloop(start, pos);
	findloop(start);	
	return 0;
}


void findloop(Node *start){
	Node *slow = start, *fast = start;
	while(slow != NULL && fast != NULL && fast -> link != NULL){
		slow = slow -> link;
		fast = fast -> link -> link;
		if(slow == fast){
			printf("Found loop in LinkedList...\n");
			return;
		}
	}
	printf("No loop found ...\n");
}

Node *createloop(Node *start, int pos){
	Node *ptr = NULL, *end;
	int count = 1;
	end = start;
	while(end -> link != NULL){
		if(count == pos){
			ptr = end;
		}
		end = end -> link;
		count++;
	}

	if(ptr == NULL){
		printf("pos is out of loop.\n");
	}
	else end -> link = ptr;
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

