#include <stdio.h>

int Higher(int n){
	if(n == 0)
		return 0;
	int oneFound = 0;
	int pos = 1;
	int num = n;
	int temp = 0;
	while( num > 0){
		if( ((num & 1) == 1) && (oneFound == 0) ){
			temp = pos;
			oneFound = 1;
			pos = pos << 1;
			num = num >> 1;
			continue;
		}
		if( (oneFound == 1) && ( num & 1) == 0){
			break;
		}  
		pos = pos << 1;;
		num = num >> 1;
	}
	n = n ^ pos;
	n = n ^ temp;
	return n;
}

void display(int n){
	int result=0,temp=1, num=n;
	while(n > 0){
		int digit = n % 2;
		n = n / 2;
		result = result + temp * digit;
		temp = temp * 10;
	}
	printf("%d = %d\n",num, result);
}

int count(int n){
	int res = 0;
	while(n > 0){
		if( (n & 1) == 1){
			res++;
		}
		n = n >> 1;
	}
	return res;
}

void higher(int n){
	int total = count(n);
	while(1){
		n++;
		if( count(n) == total){
			printf("%d\n", n);
			break;
		}
	}
	display(n);
}

int main(void){
	int n;
	printf("Enter : ");
	scanf("%d", &n);
	display(n);

	//higher(n);
	printf("%d\n", Higher(n));
	display(Higher(n));
	return 0;
}
