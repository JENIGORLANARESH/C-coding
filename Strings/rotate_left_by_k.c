#include <stdio.h>
#include <string.h>

void rotate(char *str, int n){
	int len = strlen(str);
	if(len ==0)
		return;
	n = n % len;
	char temp[len];
	int i=n;
	for(; i<len; i++){
		temp[i-n] = str[i];
	}
	i = len-n;
	for(int j=0; j<n; j++){
		temp[i] = str[j];
		i++;
	}
	temp[i] = '\0';

	printf("%s\n", temp);

}

int main(void){
	char str[1024];
	printf("Enter : ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int n;
	printf("Enter n : ");
	scanf("%d", &n);

	rotate(str, n);

	return 0;
}
