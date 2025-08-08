#include <stdio.h>
#include <stdlib.h>

struct circle{
	int radius;
};

struct rectangle{
	int breadth;
	int length;
};

struct triangle{
	int height;
	int base;
};

union area{
	struct circle Circ;
	struct rectangle Rect;
	struct triangle Tri;
};

void area(char shape){
	union area *Area = NULL;
	Area = (union area*)malloc(sizeof(union area));
	if(shape == 'r'){
		printf("Enter length & breadth : ");
		scanf("%d %d", &Area->Rect.length, &Area->Rect.breadth);
		printf("Area of Rectangle : %d\n",  Area->Rect.length * Area->Rect.breadth);
	}
	else if(shape == 'c'){
		printf("Enter radius of circle : ");
		scanf("%d", &Area->Circ.radius);
		printf("Area of Circle = %.2f\n",  3.14 * Area->Circ.radius * Area->Circ.radius);
	}
	else if(shape == 't'){
		printf("Enter height & base : ");
		scanf("%d %d", &Area->Tri.height, &Area->Tri.base);
		printf("Area of Triable = %.2f\n",  0.5 * Area->Tri.height * Area->Tri.base);
	}
	else
		printf("Wrong shape choice.\n");
	free(Area);	
}

int main(void){
	char shape;
	printf("Enter shape (r = rect) (t = tri) (c = circ) : ");
	scanf(" %c", &shape);

	area(shape);

	
	return 0;
}
