#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *deleteafter(struct node *start, int data);
struct node *deletebefore(struct node *start, int data);
struct node *deletemiddle(struct node *start, int n);
struct node *deletenode(struct node *start, int data);
struct node *deletelast(struct node *start);
struct node *deleteatfirst(struct node *start);
struct node *create(struct node *start, int n);
void display(struct node *start);
struct node *addatend(struct node *start, int data);

int main(void){
	struct node *start;
	int data, n;
	printf("Enter number of elements : ");
	scanf("%d", &n);

	start = NULL;
	start = create(start, n);
	display(start);

	/*
	printf("Deleting middle node : \n");
	start = deletemiddle(start, n);
	display(start);
	*/

	/*
	printf("After deleting first node :\n");
	start = deleteatfirst(start);
	display(start);
	*/

	/*
	printf("After deleting last node :\n");
	start = deletelast(start);
	display(start);
	*/

	/*
	printf("Enter node to be deleted : ");
	scanf("%d", &data);
	start = deletenode(start, data);
	display(start);
	*/
	
	
	printf("Delete node after : ");
	scanf("%d", &data);
	start = deleteafter(start, data);
	display(start);
	

	printf("Delete node before : ");
	scanf("%d", &data);
	start = deletebefore(start, data);
	display(start);

	return 0;
}


struct node *deleteafter(struct node *start, int data){
	struct node *p, *temp;
	p = start;
	while(p != NULL){
		if(p -> info == data){
			temp = p -> link;
			if(temp == NULL){
				printf("Node not present after %d\n", data);
				return start;
			}
			p -> link = temp -> link;
			free(temp);
			return start;
		}
		p = p -> link;
	}
	printf("%d not present in list.\n", data);
	return start;
}


struct node *deletebefore(struct node *start, int data){
	struct node *p, *temp, *prev;
	if(start == NULL || start -> link == NULL){
		printf("Not enough nodes in the list.\n");
		return start;
	}
	if(start -> info == data){
		printf("No node present before %d \n", data);
		return start;
	}

	if(start -> link -> info == data){
		temp = start;
		start = temp -> link;
		free(temp);
		return start;
	}

	prev = start;
	p = start -> link;

	while(p -> link != NULL){
		if(p -> link -> info == data){
			temp = p;
			prev -> link = temp -> link;
			free(temp);
			return start;
		}
		prev = p;
		p = p -> link;
	}
	printf("Node %d not present in list.\n", data);
	return start;
}


// Delete middle
struct node *deletemiddle(struct node *start, int n){
	int middle = n/2;
	int pos = 1;
	struct node *p, *temp;
	p = start;
	while(pos < middle){
		p = p -> link;
		pos++;
	}
	temp = p -> link;
	p -> link = temp -> link;
	free(temp);
	return start;
}

struct node *deletenode(struct node *start, int data){
	struct node *p, *temp;
	p = start;
	if(p -> info == data){
		temp = p;
		p = p -> link;
		start = p;
		free(temp);
		return start;
	}
	while(p -> link -> info != data){
		p = p -> link;
	}
	temp = p -> link;
	p -> link = temp -> link;
	free(temp);
	return start;
}

struct node *deletelast(struct node *start){
	struct node *p, *temp;
	p = start;
	while(p -> link -> link  != NULL){
		p = p -> link;
	}
	temp = p -> link;
	p -> link = NULL;
	free(temp);
	return start;
}

struct node *deleteatfirst(struct node *start){
	struct node *tmp;
	tmp = start;
	start = start -> link;
	free(tmp);
	return start;
}

struct node *create(struct node *start, int n){
	int i,  data;
	printf("Enter element : ");
	scanf("%d", &data);
	struct node *tmp;
	tmp  = (struct node *)malloc(sizeof(struct node));
	tmp -> info = data;
	tmp -> link = start;
	start = tmp;
	for(i=2; i<=n; i++){
		printf("Enter element : ");
		scanf("%d", &data);
		start = addatend(start, data);
	}
	return start;
}

struct node *addatend(struct node *start, int data){
	struct node *tmp, *p;
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp -> info = data;
	if(start == NULL){
		tmp -> link = start;
		start = tmp;
		return start;
	}
	p = start;
	while(p -> link != NULL){
		p = p -> link;
	}
	p -> link = tmp;
	tmp -> link = NULL;
	return start;
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




