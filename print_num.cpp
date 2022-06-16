// 1: Write a program in C to print first n numbers using recursion.

#include<stdio.h>
void print_num(int);
int main()
{
	int num;
	printf("Enter A number :");
	scanf("%d",&num);
		printf("\n Number from 1 to nth :\n");
	print_num(num);
	
	return 0;
}
void print_num(int n)
{
	if(n!=0)
	{
			printf("\t%d",n);
		print_num(n-1);
	
	}
	else
	{
		return ;
	}

}
