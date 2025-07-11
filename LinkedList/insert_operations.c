#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *link;
};


struct node *addatposition(struct node *start, int data, int position);
struct node *addatmiddle(struct node *start, int data, int n);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);
struct node *create(struct node *start, int n);
struct node *addafter(struct node *start, int data, int item);
struct node *addbefore(struct node *start, int data, int item);
void display(struct node *start);

int main(void){
	struct node *start;
	int n, data, position, item;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	start = NULL;
	start = create(start, n);
	display(start);

	/*
	printf("Insert element at beginning : ");
	scanf("%d", &data);
	start = addatbeg(start, data);
	display(start);
	n++; //no of elements increased
	*/

	/*
	printf("Insert element at end : ");
	scanf("%d", &data);
	start = addatend(start, data);
	display(start);
	n++; //no of elements increased
	*/

	/*
	printf("Insert element at middle : ");
	scanf("%d", &data);
	start = addatmiddle(start , data, n);
	display(start);
	n++;
	*/

	/*
	printf("Insert at position : ");
	scanf("%d", &position);
	if(position > 0 && position <=n){
		printf("Enter element : ");
		scanf("%d", &data);
		start = addatposition(start, data, position);
		display(start);
		n++;
	}else{
		printf("Position if out of range.\n");
	}
	*/

	printf("Add element Before : ");
	scanf("%d", &item);
	printf("Enter element : ");
	scanf("%d", &data);
	start = addbefore(start, data, item);
	display(start);

	printf("Add element After : ");
	scanf("%d", &item);
	printf("Enter element : ");
	scanf("%d", &data);
	start = addafter(start, data, item);
	display(start);

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

struct node *addatmiddle(struct node *start, int data, int n){
	struct node *temp, *p;
	int middle = n/2;
	int pos = 1;
	p = start;
	while(pos < middle){
		p = p -> link;
		pos++;
	}
	temp = (struct node *)malloc(sizeof(struct node));
	temp -> info = data;
	temp -> link = p -> link;
	p -> link = temp;
	return start;
}

struct node *addatposition(struct node *start, int data, int position){
	struct node *p, *temp;
	int pos = 1;
	p = start;
	temp = (struct node *)malloc(sizeof(struct node));
	temp -> info = data;

	if(position == 1){
		temp -> link = p;
		start = temp;
		return start;	
	}
	while(pos < position -1){
		p = p -> link;
		pos++;
	}
	temp -> link = p -> link;
	p -> link = temp;
	return start;
}

struct node *addbefore(struct node *start, int data, int item){
	struct node *p, *temp;
	p = start;
	if(start == NULL){
		printf("List is empty\n");
		return start;
	}
	if(p -> info == item){
		temp = (struct node *)malloc(sizeof(struct node));
		temp -> info = data;
		temp -> link = p;
		start = temp;
		return start;
	}
	while(p -> link != NULL){
		if(p -> link -> info == item){
			temp = (struct node *)malloc(sizeof(struct node));
			temp -> info = data;
			temp -> link = p -> link;
			p -> link = temp;
			return start;
		}
		p = p -> link;
	}
	printf("%d is not found in list\n", item);
	return start;
}

struct node *addafter(struct node *start, int data, int item){
	struct node *p, *temp;
	p = start;
	while(p != NULL){
		if(p -> info == item){
			temp = (struct node *)malloc(sizeof(struct node));
			temp -> info = data;
			temp -> link = p -> link;
			p -> link = temp;
			return start;
		}
		p = p -> link;
	}
	printf("%d is not present in list\n", item);
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

