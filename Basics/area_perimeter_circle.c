#include <stdio.h>
#include <math.h>

int main(void){
	float r;
	printf("Enter radius : \n");
	scanf("%f", &r);
	float area = M_PI * r * r;
	float perimeter = 2 * M_PI * r;
	printf("Area : %f\n", area);
	printf("Perimeter : %f\n", perimeter);
	return 0;
}
