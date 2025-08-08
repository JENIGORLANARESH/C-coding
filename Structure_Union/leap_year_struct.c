#include <stdio.h>

struct date{
	int day;
	int month;
	int year;
};

int leap(struct date Date){
	int y = Date.year;
	if( (y % 400) == 0){
		return 1;
	}
	else if( (y%4 == 0) && (y%100 != 0) ){
		return 1;
	}
	return 0;
}

int main(void){
	struct date Date;
	printf("Enter day/month/year : ");
	scanf("%d/%d/%d", &Date.day, &Date.month, &Date.year);
	if(leap(Date))
		printf("Leap Year.\n");
	else
		printf("Not a leap year.\n");
	return 0;
}
