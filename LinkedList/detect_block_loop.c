#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *detectstop(struct node *start);
void display(struct node *start);

int main(void){
	struct node *a;
	struct node *b;
	struct node *c;
	struct node *d;
	struct node *e;
	a = (struct node *)malloc(sizeof(struct node));
	b = (struct node *)malloc(sizeof(struct node));
	c = (struct node *)malloc(sizeof(struct node));
	d = (struct node *)malloc(sizeof(struct node));
	e = (struct node *)malloc(sizeof(struct node));
	a -> info = 10;
	b -> info = 20;
	c -> info = 30;
	d -> info = 40;
	e -> info = 50;
	a -> link = b;
	b -> link = c;
	c -> link = d;
	d -> link = e;
	e -> link = b;  // loop started
	
	struct node *start = detectstop(a);
	display(start);
	return 0;
}

struct node *detectstop(struct node *start){
	struct node *slow, *fast, *prev;
	slow = start;
	fast = start;
	while(slow != NULL && fast != NULL && fast -> link != NULL){
		slow = slow -> link;
		fast = fast -> link -> link;
		if(slow == fast){
			printf("Loop Detected.\n");
			break;
		}
	}

	slow = start;
	while(slow != fast){
		prev = fast;
		slow = slow -> link;
		fast = fast -> link;
		if(slow == fast){
			prev -> link = NULL;
			printf("Loop removed at node %d.\n", slow -> info);
			return start;
		}
	}
}


void display(struct node *start){
	struct node *p;
	p = start;
	while(p != NULL){
		printf("%d -> ", p -> info);
		p = p -> link;
	}
	printf("\n");
}
