#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct record{
	char id[100];
	char course[100];
	char grade;
}Student;


void add(Student **students, int *count){
	*students = realloc(*students, (*count+1) * sizeof(Student));
	
	Student *stu = &(*students)[*count];
	
	printf("Enter id : ");
	scanf("%s", stu->id);
	printf("Enter course : ");
	scanf("%s", stu->course);
	printf("Enter grade : ");
	getchar();
	scanf("%c", &stu->grade);
	(*count)++;
}

void search(Student *students, int count, const char *id){
	for(int i=0; i<count; i++){
		if(strcmp(students[i].id , id) == 0){
			printf("Record found:\n");
			printf("ID: %s, Course: %s, Grade: %c\n",
					students[i].id, students[i].course, students[i].grade);
			return;
		}
	}
	printf("Record not found\n");
}

int main(void){
	Student *students = NULL;
	int count = 0;

	add(&students, &count);
	add(&students, &count);

	char searchId[100];
	printf("Enter ID to search : ");
	scanf("%s", searchId);
	search(students, count, searchId);

	free(students);
	return 0;
}
