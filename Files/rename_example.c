#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char oldname[50], newname[50];
	printf("Enter name of the file to be renamed : ");
	scanf("%s", oldname);
	printf("Enter new name : ");
	scanf("%s", newname);

	if( rename(oldname, newname) == 0){
		printf("File %s is renamed to %s\n", oldname, newname);
	}
	else{
		perror("File not renamed");
	}

	return 0;
}
