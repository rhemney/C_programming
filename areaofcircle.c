//This is a program for finding the area of circle
#include <stdio.h>

#define PI 3.14

int main ()
{
	int r;
	float area;

	printf("Please Enter the radious of the circle(integers only)?\n");
	scanf("%d", &r);

	area = PI * r * r;

	printf("The area of the circle is %f.\n",area);

	return 0;


}
