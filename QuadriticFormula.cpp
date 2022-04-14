#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,X1,X2;
	printf("Enter A value :");
	scanf("%lf",&a);
	printf("Enter B value :");
	scanf("%lf",&b);
	printf("Enter C value :");
	scanf("%lf",&c);
	
	X1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    X2 = (-b-sqrt(b*b-4*a*c))/(2*a); 
    
    printf("value of X1 :%lf\n",X1);
    printf("value of X2 :%lf\n",X2);
	return 0;
}
