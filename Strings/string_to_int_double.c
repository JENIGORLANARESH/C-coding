#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int toint(char *str);
double todouble(char *str);

int main(void){
	char str[50];
	printf("Enter string : ");
	fgets(str, 50, stdin);
	
	str[strcspn(str, "\n")] = '\0';

	printf("Integer : %d\n", toint(str));
	printf("Double : %f\n", todouble(str));

	return 0;
}

int toint(char *str){
	int i=0, sign, res = 0;
	//skip leading zeros
	while(str[i] == ' '){
		i++;
	}

	
	sign = (str[i] == '-') ? -1 : 1;

	if(str[i] == '-' || str[i] == '+') i++;

	while(isdigit(str[i])){
			res = res*10 + (str[i]-'0');
			i++;
	}
	return res*sign;
}

double todouble(char *str){
	int i=0, sign;
	double res = 0;
	while(str[i] == ' ')
		i++;

	sign = (str[i] == '-') ? -1 : 1;
	if(str[i] == '-' || str[i] == '+') i++;
	
	while(isdigit(str[i])){
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if(str[i] == '.') i++;

	int j=i;
	while(isdigit(str[i])){
		res = res*10 + (str[i] - '0');
		i++;	
	}

	return (res*sign)/pow(10, i-j);
}










