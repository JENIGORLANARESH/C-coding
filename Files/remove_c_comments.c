#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp1, *fp2;
	char filename[100];
	int single = 0;
	int multi = 0;

	printf("Enter file name : ");
	scanf("%s", filename);

	fp1 = fopen(filename, "r");
	if(fp1 == NULL){
		printf("Error in opening file.\n");
		exit(1);
	}

	fp2 = fopen("./files/cleancode.c", "w");
	if(fp2 == NULL){
		printf("Error in creating output file.\n");
		fclose(fp1);
		exit(1);
	}

	int ch;
	int next;

	while( (ch = fgetc(fp1)) != EOF){

		if(ch == '/'){
			next = fgetc(fp1);
			// multiline comment
			if(next == '*'){
				while( (ch = fgetc(fp1)) != EOF){
					if( ch == '*' && (next = fgetc(fp1)) == '/'){
						break;
					}
					if(next != EOF){
						ungetc(next, fp1);
					}
				}
				continue;
			}


			// singleline comment
			else if(next == '/'){
				while( (ch = fgetc(fp1)) != EOF && ch != '\n')
					;
				fputc('\n', fp2);
				continue;
			}
			else{
				fputc(ch, fp2);
				if(next != EOF){
					fputc(next , fp2);
				}
				continue;
			}

		}

		fputc(ch, fp2);
	}


	fclose(fp1);
	fclose(fp2);

	printf("Comments are removed and code written to cleancode.c\n");

	return 0;
}
