#include<stdio.h>
int main()
{
	int a,b,sum;
	double per;
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	sum=a+b;
	per=sum*100/50;
	printf("The sum is = %d",sum);
	printf("The percentage is = %.2lf",per);
	
}
