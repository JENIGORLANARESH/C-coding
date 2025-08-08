#include <stdio.h>

struct coordinate{
	int x;
	int y;
};

int compare(struct coordinate a, struct coordinate b){
	if( (a.x == b.x) && (a.y == b.y) )
	       return 1;
	else 
		return 0;	
}

int main(void){
	struct coordinate a,b;
	printf("Enter coordinates for point a(x,y) : ");
	scanf("%d %d", &a.x , &a.y);
	printf("Enter coordinates for point b(x,y) : ");
	scanf("%d %d", &b.x , &b.y);

	if(compare(a,b))
		printf("Both are same coordinates.\n");
	else
		printf("Both have different coordinates\n");
	return 0;
}
