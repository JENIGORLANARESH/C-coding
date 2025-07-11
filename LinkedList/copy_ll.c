#include <stdio.h>
#include <stdlib.h>

struct node{
        int info;
        struct node *link;
};

struct node *create(struct node *start, int n);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);
struct node *copy(struct node *start);
void display(struct node *start);

int main(void){
        struct node *start = NULL;
	int n;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	start = create(start, n);

	struct node *copyLL = NULL;
	copyLL = copy(start);
	printf("Original LL :\n");
	display(start);
	printf("Copied LL : \n");
	display(copyLL);
	return 0;
}

struct node *copy(struct node *start){
	if(start == NULL) return start;
	struct node *copyLL = NULL, *p,  *temp;
	copyLL = (struct node *)malloc(sizeof(struct node));
	p = copyLL;
	struct node *ptr = start;
	p -> info = ptr -> info;
	p -> link = NULL;
	ptr = ptr -> link;
	while(ptr != NULL){
		temp = (struct node *)malloc(sizeof(struct node));
		temp -> info = ptr -> info;
		temp -> link = NULL;
		p -> link = temp;
		p = p -> link;
		ptr = ptr -> link;
	}
	return copyLL;
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
        if(start == NULL){
                temp = (struct node *)malloc(sizeof(struct node));
                temp -> info = data;
                temp -> link = NULL;
                start = temp;
                return start;
        }
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
