#include <stdio.h>
#include <string.h>


void multiplication(char *str1, char *str2){
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int temp[len1 + len2];

	memset(temp, 0, sizeof(temp));	// set all elements of temp to 0.

	for(int i = len1-1; i>=0; i--){
		for(int j = len2 - 1; j>=0; j--){
			int mul = (str1[i]-'0') * (str2[j]-'0');
			int pos1 = i + j;
			int pos2 = i + j + 1;

			int sum = mul + temp[pos2];

			int digit = sum % 10;
			int carry = sum / 10;
			
			temp[pos2] = digit;
			temp[pos1] = temp[pos1] + carry;
		}
	}
	
	int i=0;
	while(i < len1 + len2 && temp[i] == 0){
		i++;
	}

	if(i == len1 + len2) {
        	printf("0\n"); // product is 0
        return;
    }

	for(; i<len1+len2; i++){
		printf("%d", temp[i]);
	}
	printf("\n");
}


int main(void){
	char str1[100];
	char str2[100];
	printf("Enter str1 : ");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter str2 : ");
	fgets(str2, sizeof(str2), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	str2[strcspn(str2, "\n")] = '\0';

	multiplication(str1, str2);

	return 0;
}
