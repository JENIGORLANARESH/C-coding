#include <stdio.h>
#include <stdlib.h>

struct student{
	int id;
	char name[100];
};

int main(void){
	int n;	
	struct student *array[10];
	struct student **ptr = array;
	
	printf("Enter no of students : ");
        scanf("%d", &n);

	for(int i=0; i<n; i++){
		array[i] = (struct student *)malloc(sizeof(struct student));
		if(array[i] == NULL){
			printf("Memory allocation failed.\n");
			return 1;
		}
		printf("Enter : \n");
		printf("Enter student id : ");
		scanf("%d", &array[i]->id);
		printf("Enter student name : ");
		scanf("%s", array[i]->name);
	}	

	printf("STUDENTS : \n");
	for(int i=0; i<n; i++){
		printf("Name = %s Id = %d\n", array[i]->name, array[i]->id);
	}

	//free memory
	for(int i=0; i<n; i++){
		free(array[i]);
	}

	return 0;
}
