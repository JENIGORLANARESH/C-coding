#include <stdio.h>

union product{
	float centimeter;
	float inches;
	float feet;
};


void conversion(char unit, float value){
	union product size;
	size.centimeter = 0;
	size.inches = 0;
	size.feet = 0;

	if(unit == 'c'){
		size.centimeter	= value;
		printf("Input = %.2f cm\n", size.centimeter);
		printf("In Inch = %.2f \n", size.centimeter/2.54);
		printf("In Feet = %.2f \n", size.centimeter/30.48);
	}
	else if(unit == 'i'){
                size.inches = value;
                printf("Input = %.2f inches\n", size.inches);
                printf("In cm = %.2f \n", size.inches*2.54);
                printf("In Feet = %.2f \n", size.inches/12);
        }
	else if(unit == 'f'){
                size.feet = value;
                printf("Input = %.2f feet\n", size.feet);
                printf("In cm = %.2f \n", size.feet*30.48);
                printf("In Feet = %.2f \n", size.feet*12);
        }
	else
		printf("Invalid unit. Use 'c' for centimeter , 'i' for inches , 'f' for feet.\n");

}


int main(void){
	float value;
	char unit;
	printf("Enter unit (c = cm) (f = feet) (i == inch) : ");
	scanf("%c" , &unit);
	printf("Enter value : ");
	scanf("%f", &value);
	
	conversion(unit, value);

	return 0;
}
