#include<stdio.h>
int main()
{
	int C,D;
	printf("Enter Any charcaters :");
	scanf("%d",&C);
	printf("Enter Any 2nd charcaters :");
	scanf("%d",&D);
	
	C=C+D;
	D=C-D;
	C=C-D;
	printf("_________________________________\n");
	printf("Swip the charcaters :%d \n",C);
	printf("Swip the charcaters :%d ",D);
	
	return 0;
}
