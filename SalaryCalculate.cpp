/*Problem 5: 
			Write a complete program that prints the salary of an employee using if-else-if.
 			Use the following rules to calculate salary: */
 			
#include<stdio.h>
int main()
{
	int y_ser,edu,salary,post_G=1,graduate=2;
	char gender;
	printf("Enter Your Gender m/f:");
	scanf("%c",&gender);
	
	printf("Enter Your Service year:");
	scanf("%d",&y_ser);
	
	printf("Enter Your Qualification :\n");
	printf("For Post-Graduate Enter 1 : ");
	printf("For Graduate Enter 2 : ");
	scanf("%d",&edu);
	
	if((gender=='M'||gender=='m')&&(y_ser>=10)&&(edu==1))
	{
		printf("your salary is 15000\n");
		
	}
	else if ((gender=='M'||gender=='m'||gender=='F'||gender=='f')&&(y_ser>=10&&edu==2)||(y_ser<10&&edu==1))
	{
		printf("Your salary is 10000\n");	
	}
	else if((gender=='m'||gender=='M')&&(y_ser<10)&&(edu==2))
	{
		printf("Your salary is 7000\n");
		}	
	else if ((gender=='F'||gender=='f')&&(y_ser>=10)&&(edu==1))
	{
		printf("Your salary is 12000\n");
	}
	else if((gender=='F'||gender=='f')&&(y_ser>=10)&&(edu==2))
	{
		printf("Your salary is 9000\n");
	}
	
	else if((gender=='F'||gender=='f')&&(y_ser<10)&&(edu==2))
	{
		printf("Your salary is 6000\n");
	}
	
	
	
	return 0;
			 } 			
