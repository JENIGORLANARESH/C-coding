#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int isvowel(int ch){
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}


int main(void){
	FILE *fp1, *fp2;
	fp1 = fopen("./files/wrong.txt", "r");
	if(fp1 == NULL){
		printf("Error in opening wrong.txt\n");
		exit(1);
	}

	fp2 = fopen("./files/right.txt", "w+");

	if(fp2 == NULL){
		printf("Error in creating right.txt\n");
		fclose(fp1);
		exit(1);
	}

	int cur , next , prev = '.';
	
	while( (cur = fgetc(fp1)) != EOF ){

		if( (prev == '.' || prev == '\n') && islower(cur) ){
			cur = toupper(cur);
		}

		if(cur == 'a'){
			next = fgetc(fp1);
			if(next == ' '){
				int temp = fgetc(fp1);
				if(isvowel(temp)){
					fputc('a', fp2);
					fputc('n', fp2);
					fputc(' ', fp2);
				}
				else{
					fputc('a', fp2);
					fputc(' ', fp2);
				}
				if(temp != EOF) {
					fputc(temp, fp2);
					prev = temp;
				}
				else{
					prev = ' ';
				}
			}
			else{
				fputc('a', fp2);
				if(next != EOF)
				       	ungetc(next, fp1);
				prev = 'a';
			}
		}
		else{
			fputc(cur, fp2);
			prev = cur;
		}
	}

	printf("Text formatted successfully.\n");

	fclose(fp1);
	fclose(fp2);

	return 0;
}
