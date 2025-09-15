#include <stdio.h>
#include <string.h>

int anagram(char *str1, char *str2){
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	if(l1 != l2)
		return 0;
	int f1[128] = {0};
        int f2[128] = {0};
	for(int i=0; i<l1; i++){
		int ch1 = str1[i];
		int ch2 = str2[i];
		f1[ch1]++;
		f2[ch2]++;
	}

	for(int i=0; i<128; i++){
		if(f1[i] != f2[i]){
			return 0;
		}
	}
	return 1;
}

int main(void){
	char str1[1000];
	char str2[1000];
	
	printf("Enter str1 : ");
	scanf("%s", str1);
	getchar();
	printf("Enter str2 : ");
	scanf("%s", str2);

	int temp  = anagram(str1, str2);

	if(temp)
		printf("Anagram\n");
	else
		printf("Not Anagram\n");

	return 0;
}
