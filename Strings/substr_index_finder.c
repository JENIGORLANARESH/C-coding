#include <stdio.h>
#include <string.h>

int firstOccurence(char *str, char *sub){
	for(int i=0; str[i]; i++){
		int found = 1;
		int j=0;
		while(sub[j]){
			if(str[i+j] != sub[j]){
				found = 0;
				break;
			}
			j++;
		}
		if(found){
			return i;
		}
	}
	return -1;
}

int lastOccurence(char *str, char *sub){
	int n = -1;
	for(int i=0; str[i]; i++){
		int found = 1;
		int j=0;
		while(sub[j]){
			if(str[i+j] != sub[j]){
				found = 0;
				break;
			}
			j++;
		}
		if(found)
			n = i;
	}
	return n;
}

int main(void){
	char a[100];
	char b[100];
	printf("Enter a : ");
	fgets(a, sizeof(a), stdin);
	a[strcspn(a, "\n")] = '\0';
	printf("Enter b : ");
	fgets(b, sizeof(b), stdin);
	b[strcspn(b, "\n")] = '\0';
	
	printf("First occurence of substring(index) : %d\n", firstOccurence(a,b));
	printf("Last occurence of substring(index) : %d\n", lastOccurence(a,b));
	return 0;
}
