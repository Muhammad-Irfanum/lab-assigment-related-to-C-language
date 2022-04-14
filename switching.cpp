#include<stdio.h>
int main()
{
int num1,num2,sum,subtract,multiply;
float divide,per;
char opertor;
	printf("Enter a value :");
	scanf("%d",&num1);
	printf("Choose Any operator for your calculation :");
	scanf("%c",opertor);
	printf("Enter a value :");
	scanf("%d",&num2);
	
	switch (opertor)
	{
	case '+':
		printf("Addition");
		sum = num1+num2;
	break;
	
	case '-':
		printf("subtraction");
		subtract = num1-num2;
	break;
		
		case '*':
		printf("Multiplication");
		multiply = num1*num2;
	break;
		
		case '/':
		printf("Division");
		divide = num1/num2;
	break;
		
		case '%':
		printf("per");
		sum = num1+num2;
	break;
		
		
		
		
		
		
		
		
	}
	return 0;
}
