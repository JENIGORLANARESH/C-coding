#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *create(struct node *start, int n);
int count(struct node *start, int item);
struct node *addatend(struct node *start, int data);

int main(void){
	struct node *start = NULL;
	int n, item;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	printf("Enter item to be counted : ");
	scanf("%d", &item);
	start = create(start, n);
	int c = count(start, item);
	printf("%d appeared %d time.\n", item, c);
	return 0;
}

struct node *create(struct node *start, int n){
	struct node *ptr;
	int data;
	ptr = (struct node *)malloc(sizeof(struct node));
	printf("Enter element : ");
	scanf("%d", &ptr -> info);
	ptr -> link = NULL;
	start = ptr;
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
	temp -> link = ptr -> link;
	ptr -> link = temp;
	return start;
}

int count(struct node *start, int item){
	int c = 0;
	struct node *ptr= start;
	while(ptr != NULL){
		if(item == ptr -> info){
			c++;
		}
		ptr = ptr -> link;
	}
	return c;
}
