#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *link;
};

void search(struct node *start, int);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);
struct node *create(struct node *start, int n);
void search(struct node *start, int item);

int main(void){
	int item, n;
	struct node *start = NULL;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	if(n == 0) {
		printf("List should have atleast one element\n");
		return 0;
	}
	start = create(start, n);
	
	printf("Enter item to be searched : ");
	scanf("%d", &item);
	search(start, item);
	return 0;
}

struct node *create(struct node *start, int n){
	int i, data;
	printf("Enter element : ");
	scanf("%d", &data);
	start = addatbeg(start, data);
	for(i=2; i<=n; i++){
		printf("Enter element : ");
		scanf("%d", &data);
		start = addatend(start , data);
	}
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


struct node *addatend(struct node *start , int data){
	struct node *temp , *p;
	temp = (struct node *)malloc(sizeof(struct node));
	temp -> info = data;
	if(start == NULL){
		temp -> link = start;
		start = temp;
		return temp;
	}

	p = start;
	while(p -> link != NULL){
		p = p -> link;
	}

	p -> link = temp;
	temp -> link = NULL;
	return start;
}

void search(struct node *start, int item){
	struct node *p;
	p = start;
	int pos = 1;
	while(p != NULL){
		if(p -> info == item){
		       	printf("Item found at %d\n", pos);
			return;
		}
		p = p -> link;
		pos++;
	}
	printf("Item not found in LL\n");
}


