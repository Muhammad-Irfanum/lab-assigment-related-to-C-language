//Write a program that reads in the radius of a circle and prints the circle's diameter, circumference and area


#include<stdio.h>
int main()
{
  float radius, pi=3.14;
  printf("Enter the radius of a circle :");
  scanf("%f",&radius);
  
  float daimeter = 2*radius;
  float circumference = 2*pi*radius;
  float area = pi*radius*radius;
  
  printf("Circle Daimeter :%f\n",daimeter);
  printf("Circle Circumference  :%f\n",circumference);
  printf("Circle area :%f\n",area);
	return 0;
}
