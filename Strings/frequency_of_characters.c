#include <stdio.h>
#include <string.h>

void frequency(char *str);

int main(void){
	char str[100];
	printf("Enter str : \n");
	fgets(str, 100, stdin);
	frequency(str);
	return 0;
}

void frequency(char *str){
	int l = strlen(str);
	int count = 0;
	for(int i=0; i<l-1; i++){
		if(str[i] != 0){
			char ch = str[i];
			for(int j=i; j<l-1; j++){
				if(str[j] == ch){
					count++;
					str[j] = 0;
				}
			}
			printf("%c\t%d\n", ch, count);
			count = 0;
		}
	}
}
