/*Problem 2: 
		Input 5 values from the user and display the number of positives, 	
		the number of negatives, and the number of zeros amongst the 5 values using if-else-if.*/
		
#include<stdio.h>
int main()
{
	int v1,v2,v3,v4,v5;				//v=value
	int positive=0,negitive=0,zero=0;
	printf("Enter value :");
	scanf("%d",&v1);
	printf("Enter value :");
	scanf("%d",&v2);
	printf("Enter value :");
	scanf("%d",&v3);
	printf("Enter value :");
	scanf("%d",&v4);
	printf("Enter value :");
	scanf("%d",&v5);
	
	if(v1>=0)
	{
		positive= positive+1;
	}
	else if(v1<0)
	{
		negitive= negitive+1;
	}
 if(v1==0)
	{
		zero= zero+1;
	}
	
	if(v2>=0)
	{
		positive= positive+1;
	}
	else if(v2<0)
	{
		negitive= negitive+1;
	}
 if(v2==0)
	{
		zero= zero+1;
	}
	
	if(v3>=0)
	{
		positive= positive+1;
	}
 else if(v3<0)
	{
		negitive= negitive+1;
	}
	 if(v3==0)
	{
		zero= zero+1;
	}
	
	if(v4>=0)
	{
		positive= positive+1;
	}
	else if(v4<0)
	{
		negitive= negitive+1;
	}
	 if(v4==0)
	{
		zero= zero+1;
	}
	
	if(v5>=0)
	{
		positive= positive+1;
	}
	else if(v5<0)
	{
		negitive= negitive+1;
	}
 if(v5==0)
	{
		zero= zero+1;
	}
	printf("Total Positive values :%d\n",positive);
	printf("Total Negitive values :%d\n",negitive);
	printf("Total Zero values :%d\n",zero);
	return 0;
}


