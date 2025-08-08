#include <stdio.h>

struct date{
	int day;
	int month;
	int year;
};

int is_leap_year(int year) {
    return ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) );
}

int valid_date(struct date Date){
	if(Date.month <1 || Date.month>12 || Date.year<1 || Date.day < 1){
		return 0;
	}
	
	int maxday;
	switch(Date.month){
		case 4: case 6: case 9: case 11:
			maxday = 30;
			break;
		case 2:
			if(is_leap_year(Date.year))
				maxday = 29;
			else
				maxday = 28;
			break;
		default:
			maxday = 31;
	}

	return (Date.day <= maxday);
}

int main(void){
	struct date Date;
	printf("Enter date : ");
	scanf("%d/%d/%d", &Date.day, &Date.month, &Date.year);
	
	if(valid_date(Date)){
		printf("Valid Date.\n");
	}
	else{
		printf("Invalid Date.\n");
	}
	return 0;
}
