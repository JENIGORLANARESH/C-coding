#include <stdio.h>
#include <string.h>

void i_to_string(int i, int base); 
void d_to_string(double num);

int main(void){
	int i, ibase, dbase;
	double d;
	printf("Enter i & ibase : \n");
	scanf("%d", &i);
	scanf("%d", &ibase);
//	printf("%d %d\n", i, ibase);
	i_to_string(i, ibase);

	return 0;
}

void i_to_string(int i, int base){
	char str[100];
	int sign, j=0;

	if(i < 0){
		sign = -1;
		i = -i;
	}

	while(i > 0){
		int rem = i % base;
		i = i/base;
		if(rem > 9 && rem<15){
			str[j] = rem - 10 + '0';
		}
		else{
			str[j] = rem + '0';
		}
		j++;
	}
	if(sign == -1){
		str[j] = '-';
		j++;
	}
	str[j] = '\0';


	for(int k=j-1; k>=0; k--){
		printf("%c", str[k]);
	}
	printf("\n");
}



void d_to_string(double num){
	
}








