#include <stdio.h>
#include <string.h>

int caseInsensitiveCompare(char *str1, char *str2){
	int i=0,j=0;
	while(str1[i] && str2[j]){
		char ch1 = str1[i], ch2 = str2[j];

		if(ch1 >= 'A' && ch1 <='Z'){
			ch1 = ch1 + 32;
		}
		if(ch2 >= 'A' && ch2 <= 'Z'){
			ch2 = ch2 + 32;
		}
		if(ch1 > ch2){
			return 1;
		}
		else if(ch1 < ch2){
			return -1;
		}
		i++;
		j++;
	}

	if(str1[i] == '\0' && str2[j] == '\0'){
		return 0;
	}

	if(str1[i] != '\0'){
		return 1;
	}
	if(str2[j] != '\0'){
		return -1;
	}
	return 0;	//safe return
}

int main(void){
	char str1[100], str2[100];
	printf("Enter str1 : ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	printf("Enter str2 : ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';

	int n = caseInsensitiveCompare(str1, str2);
	if(n>0)
		printf("str1 > str2\n");
	else if(n<0)
		printf("str1 < str2\n");
	else
		printf("str1 == str2\n");
	return 0;
}


