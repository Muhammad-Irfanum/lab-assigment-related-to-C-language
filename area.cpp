#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("Enter a value :");
	scanf("%f",&a);
	printf("Enter b value :");
	scanf("%f",&b);
	printf("Enter c value :");
	scanf("%f",&c);
	
	s =(a+b+c)/2;
	
	area =sqrt(s*(s-a)*s*(s-b)*s*(s-c));
	
	printf("area of lenth :%f",area);
	
	return 0;
	
}

