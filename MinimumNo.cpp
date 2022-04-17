		/*Problem 3: 
		Prompt user to input 5 values and display the minimum number amongst them using switch statement.*/

#include<stdio.h>
int main()
{
int n1,n2,n3,n4,n5;

	printf("Enter Any value\n");
	scanf("%d",&n1);
		printf("Enter Any value\n");
	scanf("%d",&n2);
		printf("Enter Any value\n");
	scanf("%d",&n3);
		printf("Enter Any value\n");
	scanf("%d",&n4);
		printf("Enter Any value\n");
	scanf("%d",&n5);
	printf("\n");	
	
	switch((n1<n2&&n1<n3&&n1<n4&&n1<n5))
	{
	
	case 1:
			printf("%d is the Minimum number",n1);
			break;
	case 0:
		switch((n2<n3&&n2<n4&&n2<n5&&n2<n1))
		{
			case 1:
				printf("%d is the Minimum Number",n2);
				break;
			case 0:
			switch((n3<n4&&n3<n5))	
			{
			case 1:	
				printf("%d is the Minimum Number",n3);
				break;
			case 0:
				switch(n4<n5)
				{
					case 1:
						printf("%d is the Minimum Number",n4);
						break;
					case 0:
						printf("%d is the Minimum Number",n5);
						break;	
					}	
			}
		}
}
	return 0;
}		
