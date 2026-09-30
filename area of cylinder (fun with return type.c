/*WAP to calculate the area of cylinder using function(function with return type)*/
#include<stdio.h>
float area(int,int);
int main()
{
	float x;
	x=area(5,2);
	printf("%f",x);
	return 0;
}
float area(int r,int h)
{
	float a;
	a=2*3.14*r*h;
	return a;
}
