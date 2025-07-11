#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *link;
};

void display(struct node *start);
struct node *reverse(struct node *start);
struct node *create(struct node *start);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);

int main(void){
	struct node *start;
	start = NULL;
	start = create(start);
	display(start);
	start = reverse(start);
	display(start);
	return 0;
}

struct node *reverse(struct node *start){
	struct node *prev, *ptr, *next;
	ptr = start;
	prev = NULL;
	while(ptr != NULL){
		next = ptr -> link;
		ptr -> link = prev;
		prev = ptr;
		ptr = next;
	}
	start = prev;
	return start;
}

struct node *create(struct node *start){
        int i,n,data;
        printf("Enter number of nodes : ");
        scanf("%d", &n);
        printf("Enter element : ");
        scanf("%d", &data);
        start = addatbeg(start, data);

        for(i=2; i<=n; i++){
                printf("Enter element : ");
                scanf("%d", &data);
                start = addatend(start, data);
        }
        return start;
}


struct node *addatbeg(struct node *start, int data){
        struct node *tmp;
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp -> info = data;
        tmp -> link = start;
        start = tmp;
        return start;
}


struct node *addatend(struct node *start, int data){
        struct node *tmp, *p;
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp -> info = data;
        if(start ==  NULL){
                tmp -> link = start;
                start = tmp;
                return start;
        }
        p = start;

        while(p -> link != NULL){
                p = p -> link;
        }

        p -> link = tmp;
        tmp -> link = NULL;;
        return start;
}


void display(struct node *start){
        struct node *p = start;
        while(p != NULL){
                printf("%d ", p -> info);
                p = p -> link;
        }
        printf("\n\n");
}


