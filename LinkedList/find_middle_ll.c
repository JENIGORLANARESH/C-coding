#include <stdio.h>
#include <stdlib.h>

typedef struct node{
        int info;
        struct node *link;
}Node;

struct node *create(struct node *start, int n);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);
void display(struct node *start);
int middle(Node *start);

int main(void){
        struct node *start = NULL;
	int n;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	start = create(start, n);
	display(start);
	int m = middle(start);
	printf("Middle : %d\n", m);
	return 0;
}


int middle(Node *start){
	Node *slow, *fast;
	slow = start;
	fast = start;
	while(fast != NULL && fast -> link != NULL){
		fast = fast -> link -> link;
		slow = slow -> link;
	}
	return slow -> info;
}


struct node *create(struct node *start, int n){
        int data;
        printf("Enter element : ");
        scanf("%d", &data);
        start = addatbeg(start , data);
        for(int i=2; i<=n; i++){
                printf("Enter element : ");
                scanf("%d", &data);
                start = addatend(start, data);
        }
        return start;
}

struct node *addatend(struct node *start, int data){
        struct node *ptr, *temp;
        ptr = start;
        while(ptr -> link != NULL){
                ptr = ptr -> link;
        }
        temp = (struct node *)malloc(sizeof(struct node));
        temp -> info = data;
        temp -> link = NULL;
        if(ptr == NULL){
                start = temp;
                return start;
        }
        ptr -> link = temp;
        return start;
}

struct node *addatbeg(struct node *start, int data){
        struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node));
        temp -> info = data;
        temp -> link = start;
        start = temp;
        return start;
}

void display(struct node *start){
	struct node *ptr = start;
	while(ptr != NULL){
		printf("%d -> ", ptr -> info);
		ptr = ptr -> link;
	}
	printf("\n");
}
