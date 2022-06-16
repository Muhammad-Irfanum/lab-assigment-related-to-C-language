//2.	Write a program in C to calculate the sum of numbers from 1 to n using recursion.

#include<stdio.h>
int sum_num(int);
int main()
{
	int num;
	printf("ENter A number :");
	scanf("%d",&num);
	
	int r= sum_num(num);
	printf("\nsum:\t%d",r);
return 0;	
}
int sum_num(int n)
{
	int count=0;
	if(n==0)
	{
		return 0;
	}
	else
	{
		count= count+ n;
	printf(" %d",count);
		return count+ sum_num(n-1);
	

	}
}
