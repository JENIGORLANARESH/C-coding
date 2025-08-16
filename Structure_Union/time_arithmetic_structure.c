#include <stdio.h>
#include <stdlib.h>

struct Time{
	int hour;
	int min;
	int sec;
};

struct Time add(struct Time time1, struct Time time2){
	struct Time time;
	time.sec = (time1.sec + time2.sec) % 60;
	time.min = (time1.min + time2.min) % 60 + (time1.sec + time2.sec) / 60;
	time.hour = (time1.hour + time2.hour) + (time1.min + time2.min) / 60;
	return time;
}

struct Time sub(struct Time time1, struct Time time2){
	struct Time time;
	time.sec = time1.sec - time2.sec;
	if(time.sec < 0){
		time.sec = 60 + time.sec;
		time1.min = time1.min - 1;
	}

	time.min = time1.min - time2.min;
	if(time.min < 0){
		time.min = 60 + time.min;
		time1.hour = time1.hour - 1;
	}
	time.hour = time1.hour - time2.hour;

	return time;
}

int main(void){
	struct Time time1;
	struct Time time2;
	
	printf("Enter time1 h:m:s : ");
	scanf("%d:%d:%d", &time1.hour, &time1.min, &time1.sec);
	printf("Enter time2 h:m:s : ");
	scanf("%d:%d:%d", &time2.hour, &time2.min, &time2.sec);

	struct Time time = add(time1, time2);

	printf("Addition : %02d:%02d:%02d\n", time.hour, time.min, time.sec);
	
	time = sub(time1, time2);

	printf("Substraction : %02d:%02d:%02d\n", time.hour, time.min, time.sec);

	return 0;
}
