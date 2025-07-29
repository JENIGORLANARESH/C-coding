#include <stdio.h>

char *strncpy(char *des, const char *src, long unsigned int n){
	int i=0;
	while(i<n && src[i] != '\0'){
		des[i] = src[i];
		i++;
	}
	
	while(i<n){
		des[i] = '\0';
		i++;
	}
	return des;
}

int strncmp(const char *str1, const char *str2, long unsigned int n){
	for(int i=0; i<n; i++){
		if(str1[i] != str2[i]){
			return (unsigned char )str1[i] - (unsigned char)str2[i];
		}
		else if(str1[i] == '\0'){
			return 0;
		}
	}
	return 0;
}

char *strncat(char *des, const char *src, long unsigned int n){
	int j=0, i=0;
	while(des[j] != '\0'){
		j++;
	}
	
	while(i<n && src[i] != '\0'){
		des[j++] = src[i++];
	}
	des[j] = '\0';
	return des;
}

int main(void){
	char str1[100];
	char str2[100];
	char temp[100];

	printf("Enter str1 : ");
	scanf("%s", str1);
	printf("Enter str2 : ");
	scanf("%s", str2);
	printf("str1 =%s\nstr2 =%s\n", str1, str2);
	int n;

	printf("No of char to be copied to temp from str1: ");
	scanf("%d", &n);
	strncpy(temp, str1, n);
	printf("temp :%s\n", temp);

	printf("Number of char to be CONCAT from str2 to str1 : ");
	scanf("%d", &n);
	strncat(str1, str2, n);
	printf("str1 :%s\nstr2 :%s\n", str1, str2);

	printf("Number of char to be COMPARED between str1 and str2 : ");
	scanf("%d", &n);
	n = strncmp(str1, str2, n);
	if(n > 0)
		printf("str1 > str2\n");
	else if(n < 0)
		printf("str1 < str2\n");
	else
		printf("str1 == str2\n");
	return 0;
}




