#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct{
	char name[50];
	int copies;
	float cost;
}book;

void insert(FILE *fp);
void modify(FILE *fp);
void booksold(FILE *fp);
int search(FILE *fp, char *name);
void display(FILE *fp);
void list(FILE *fp);
void delete(FILE **fp);

int main(void){
	FILE *fp;
	int choice;
	fp = fopen("./files/bookshop.dat" , "rb+");
	if(fp == NULL){
		fp = fopen("./files/bookshop.dat", "wb+");
		if(fp == NULL){
			printf("Error in creating file.\n");
			exit(1);
		}
	}

	while(1){
		printf("1. Insert a new record.\n");
		printf("2. Remove a record.\n");
		printf("3. Display record of a book.\n");
		printf("4. Modify an existing record of a book.\n");
		printf("5. List all records.\n");
		printf("6. Book sold.\n");
		printf("7. Exit.\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				insert(fp);
				break;
			case 2:
				delete(&fp);
				break;
			case 3:
				display(fp);
				break;
			case 4:
				modify(fp);
				break;
			case 5:
				list(fp);
				break;
			case 6:
				booksold(fp);
				break;
			case 7:
				fclose(fp);
				exit(1);
			default:
				printf("Wrong choice.\n");
		}
	}

	return 0;
}

void insert(FILE *fp){
	fseek(fp, 0, 2);	// place position indicator at end
	printf("Enter book name : ");
	scanf("%s", book.name);
        printf("Enter no of copies : ");
	scanf("%d", &book.copies);
	printf("Enter cost : ");
	scanf("%f", &book.cost);
	fwrite(&book, sizeof(book), 1, fp);	
}

int search(FILE *fp, char *name){
	rewind(fp);
	unsigned int flag = 0;
	while( fread(&book, sizeof(book), 1, fp) == 1){
		if( strcmp(name, book.name) == 0){
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		printf("\nName not found in file\n\n");
	return 1;
}

void delete(FILE **fp){
	FILE *ftemp;
	char name[50];
	printf("Enter name of the book to be deleted : ");
	scanf("%s", name);
	if(search(*fp, name) == 0){
		return;
	}

	ftemp = fopen("./files/tempbook.dat", "wb");
	if(ftemp == NULL){
		printf("\nError in opening file.\n\n");
		return;
	}

	rewind(*fp);

	while( fread(&book, sizeof(book), 1, *fp) == 1){
		if( strcmp( book.name, name) != 0){
			fwrite(&book, sizeof(book), 1 , ftemp);
		}
	}

	fclose(*fp);
	fclose(ftemp);
	remove("./files/bookshop.dat");
	rename("./files/tempbook.dat", "./files/bookshop.dat");
	*fp = fopen("./files/bookshop.dat", "rb+");
	
	if(*fp == NULL){
		printf("\nError reopening bookshop\n\n");
		return;
	}
	printf("\nRecord Deleted Successfully\n\n");
}

void display(FILE *fp){
	char name[50];
	printf("Enter the name of the book : ");
	scanf("%s", name);
	rewind(fp);
	int flag = 0;
	while( fread(&book, sizeof(book), 1, fp) == 1){
		if(strcmp(name, book.name) == 0){
			printf( "\n%-20s%-10s%-10s\n" ,"NAME", "COPIES", "COST");
			printf("%-20s%-10d%-10.2f\n", book.name, book.copies, book.cost);
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		printf("\nBook not found in files.\n\n");
	}
	printf("\n");
}


void list(FILE *fp){
	rewind(fp);
	printf( "\n%-20s%-10s%-10s\n" ,"NAME", "COPIES", "COST");
	while( fread(&book, sizeof(book), 1, fp) == 1){
		printf("%-20s%-10d%-10.2f\n", book.name, book.copies, book.cost);
	}
	printf("\n\n");
}


void modify(FILE *fp){
	char name[50];
	long size = sizeof(book);
	printf("Enter name of the to be modified : ");
	scanf("%s", name);
	if( search(fp, name) ){
		printf("Enter new data --> \n");
		printf("Enter name of the book : ");
		scanf("%s", book.name);
		printf("Enter no of copies : ");
		scanf("%d", &book.copies);
		printf("Enter cost of book : ");
		scanf("%f", &book.cost);
		
		fseek(fp, -size, 1);	// moving back position pointer by sizeof(book) bytes
		
		fwrite(&book, sizeof(book), 1, fp);
		printf("\nRecord successfully modified\n\n");
	}
}


void booksold(FILE *fp){
	char name[50];
	int size = sizeof(book);
	printf("Enter book to be sold : ");
	scanf("%s", name);
	if( search(fp, name) == 1 ){
		if(book.copies > 0){
			book.copies--;
			fseek(fp, -size, 1);
			fwrite(&book, sizeof(book), 1, fp);
			printf("One book sold\n");
			printf("Now no of copies = %d\n\n", book.copies);
		}
		else{
			printf("Book is out stock\n\n");
		}
	}
}



