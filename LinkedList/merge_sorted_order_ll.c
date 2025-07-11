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
Node *merge(Node *start1, Node *start2);

int main(void){
	Node *start1 = NULL, *start2 = NULL;
	int n1, n2;
	printf("Enter number of elements in fist linkedlist : ");
	scanf("%d", &n1);
	start1 = create(start1, n1);
	printf("Enter number of elements in second linkedlist : ");
	scanf("%d", &n2);
	start2 = create(start2, n2);
	
	Node *start = merge(start1, start2);
	printf("After merging : \n");
	display(start);

	return 0;
}


Node *merge(Node *start1, Node *start2){
	if(start1 == NULL) return start2;
	if(start2 == NULL) return start1;
	if(start1->info <= start2->info){
		start1 -> link = merge(start1->link, start2);
		return start1;
	}
	else{
		start2 -> link = merge(start1, start2 -> link);
		return start2;
	}
}


/*
Node *merge(Node *start1, Node *start2){
	Node *p1, *p2;
	Node *start, *temp;
	p1 = start1;
	p2 = start2;
	if(p1->info <= p2->info){
		start = p1;
		p1 = p1->link;
		start->link = NULL;
	}else{
		start = p2;
		p2 = p2->link;
		start->link = NULL;
	}
	temp = start;
	while(p1 != NULL && p2 != NULL){
		if(p1->info <= p2->info){
			temp ->link = p1;
			p1 = p1->link;
			temp = temp->link;
			temp->link = NULL;
		}
		else{
			temp->link = p2;
			p2 = p2->link;
			temp = temp->link;
			temp->link = NULL;
		}
	}
	if(p1 != NULL){
		temp -> link = p1;
	}
	if(p2 != NULL){
		temp -> link = p2;
	}
	return start;
}
*/

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

