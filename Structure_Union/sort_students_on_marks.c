#include <stdio.h>
#define N 5
struct student{
	char name[20];
	int rollno;
	int marks[5];
	int total;
	char grade;
};

void display(struct student);
void calculate(struct student stu[]);

int main(void){
	struct student stu[N];

	for(int i=0; i<N; i++){
		printf("Enter data of student %d\n", i+1);
		printf("Name : ");
		scanf("%s", stu[i].name);
		printf("RollNo : ");
		scanf("%d", &stu[i].rollno);
		printf("Marks : \n");
		for(int j=0; j<N; j++){
			printf("Subject %d : ", j+1);
			scanf("%d", &stu[i].marks[j]);
		}
	}

	calculate(stu);

	printf("\n\n");	
	//display
	for(int i=0; i<N; i++){
		display(stu[i]);
	}

	return 0;
}

void calculate(struct student stu[]){
	for(int i=0; i<N; i++){
		int t = 0;
		for(int j=0; j<N; j++){
			t = t + stu[i].marks[j];
		}
		stu[i].total = t;
		if(t > 400) stu[i].grade = 'A';
		else if(t > 300) stu[i].grade = 'B';
		else if(t > 200) stu[i].grade = 'C';
		else if(t > 100) stu[i].grade = 'D';
		else stu[i].grade = 'F';
	}	
	
	for(int i=0; i<N-1; i++){
		for(int j=i+1; j<N; j++){
			if(stu[i].total < stu[j].total){
				struct student temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}

}


void display(struct student stu){
	printf("Name : %s\n", stu.name);
	printf("RollNo : %d\n", stu.rollno);
	printf("Total : %d\n", stu.total);
	printf("Grade : %c\n", stu.grade);
	printf("\n");
}

