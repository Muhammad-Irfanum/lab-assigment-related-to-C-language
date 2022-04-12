#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,n;
	
	printf("Enter five digit number :");
	scanf("%d",&n);
	
	e= (n+1)%10;
	printf("1st digit %d\n",e);
	 
		
	n= n/10;
	
	d=  (n+1)%10;
	printf("2nd digit %d\n",d);
	
	n= n/10;
	

	c=  (n+1)%10;
	printf("3rd digit %d\n",c);

	n= n/10;
	
	b=  (n+1)%10;
	printf("4th digit %d\n",b);
	
	n= n/10;
	
	
	a=  (n+1)%10;
	printf("5th digit %d\n",a);
	
	 printf("\n");
	 
	 printf(" %d %d %d %d %d ",a,b,c,d,e);
	
}
