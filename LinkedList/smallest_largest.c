#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *create(struct node *start, int n);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);

int main(void){
	struct node *start = NULL;
	int small = 0, big = 0, n;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	start = create(start, n);
	small = start -> info;
	big = start -> info;
	struct node *ptr = start;
	while(ptr != NULL){
		if(small > ptr -> info) small = ptr -> info;
		if(big < ptr -> info) big = ptr -> info;
		ptr = ptr -> link;
	}
	printf("Smallest : %d\n", small);
	printf("Biggest : %d\n", big);
	return 0;
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
