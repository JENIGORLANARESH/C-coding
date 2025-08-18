#include <stdio.h>
#include <string.h>

char *reverse(char *t);

int main(void){
    char arr[100];
    printf("Enter string : \n");
    fgets(arr, 100, stdin);
    arr[strcspn(arr, "\n")] = '\0';

    char *t;
    t = strtok(arr, " ");
    while(t != NULL){
        printf("%s ",  reverse(t));
        t = strtok(NULL, " ");
    }
    printf("\n");
    return 0;
}

char *reverse(char *t){
    int len = strlen(t);
    int i=0, j=len-1;
    while(i < j){
        char p = t[j];
        t[j] = t[i];
        t[i] = p;
        i++;
        j--;
    }
    return t;
}
