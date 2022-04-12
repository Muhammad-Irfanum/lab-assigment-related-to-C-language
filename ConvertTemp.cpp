#include<stdio.h>
int main()
{
	float temp,fahrenheit;
	printf("Enter temp in Celeius  :");
	scanf("%f",&temp);
	
	fahrenheit =1.8*temp+32;
	
	printf("temp in fahrenheit :%f",fahrenheit);
		
	return 0;
}
