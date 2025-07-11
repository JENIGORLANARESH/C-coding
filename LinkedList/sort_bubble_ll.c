#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct emp{
	char name[20];
	int age;
	float salary;
	struct emp *link;
};

struct emp *create(struct emp *start, int n);
struct emp *sort(struct emp *start);
void display(struct emp *start);
struct emp *addatend(struct emp *start, char *name, int data, float salary);

int main(){
	struct emp *start = NULL;
	start = create(start, 5);
	printf("Before sorting : \n");
	display(start);
	printf("After sorting : \n");
	start = sort(start);
	display(start);
	return 0;
}

struct emp *sort(struct emp *start){
	struct emp *i, *j;

	char name[20];
	int age;
	float salary;
	for(i = start; i -> link != NULL; i = i -> link){
		for(j = i -> link; j != NULL; j = j -> link){
			if( strcmp(i -> name, j -> name) > 0 ){
				strcpy(name, j -> name);
				age = j -> age;
				salary = j -> salary;

				strcpy(j -> name, i -> name);
				j -> age = i -> age;
				j -> salary = i -> salary;

				strcpy(i -> name, name);
				i -> age = age;
				i -> salary = salary;
			}
		}
	}
	return start;
}

struct emp *create(struct emp *start, int n){
	struct emp *temp;
	char name[20];
	int age;
	float salary;
	printf("Enter name , age, salary : \n");
	temp = (struct emp *)malloc(sizeof(struct emp));
	scanf("%s %d %f", temp -> name, &temp -> age, &temp -> salary);
		
	temp -> link = NULL;
	start = temp;
	for(int i=1; i<n; i++){
		scanf("%s %d %f", name, &age, &salary);
		start = addatend(start, name, age, salary);	
	}
	return start;
}

struct emp *addatend(struct emp *start, char *name, int age, float salary){
	struct emp *ptr, *temp;
	ptr = start;
	while(ptr -> link != NULL){
		ptr = ptr -> link;
	}
	temp = (struct emp *)malloc(sizeof(struct emp));
	strcpy(temp -> name, name);
	temp -> age = age;
	temp -> salary = salary;
	temp -> link = ptr -> link;
	ptr -> link = temp;
	return start;
}

void display(struct emp *start){
	struct emp *temp = start;
	int i = 1;
	while(temp != NULL){
		printf("Employee : %d == Name : %s\tAge : %d\tSalary : %.2f\n", i++, temp -> name, temp -> age, temp -> salary);
		temp = temp -> link;	
	}
	printf("\n");
}
