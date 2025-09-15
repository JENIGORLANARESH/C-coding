#include <stdio.h>

int main(void) {
    FILE *fp1 = fopen("file1.txt", "r");
    FILE *fp2 = fopen("file2.txt", "r");
    FILE *fp3 = fopen("file3.txt", "w");

    if (!fp1 || !fp2 || !fp3) {
        printf("Error opening files\n");
        if (fp1) fclose(fp1);
        if (fp2) fclose(fp2);
        if (fp3) fclose(fp3);
        return 1;
    }

    int ch1, ch2;
    while (1) {
        
	    while ((ch1 = fgetc(fp1)) != EOF && ch1 != ' ' && ch1 != '\n')
            fputc(ch1, fp3);

            if (ch1 == EOF) break;  
            fputc(' ', fp3);

            while ((ch2 = fgetc(fp2)) != EOF && ch2 != ' ' && ch2 != '\n')
            fputc(ch2, fp3);

            if (ch2 == EOF) break;
            fputc(' ', fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}

