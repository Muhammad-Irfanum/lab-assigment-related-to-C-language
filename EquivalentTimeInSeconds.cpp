#include<stdio.h>
int main ()
{
	int hrs,mints, sec;
	printf("Enter Hours :");
	scanf("%d",&hrs);
	printf("Enter Mints :");
	scanf("%d",&mints);
	printf("Enter seconds :");
	scanf("%d",&sec);
     
    hrs =3600*hrs;
    mints =60*mints;
    sec =60*sec;
    
    int total  =hrs+mints+sec;
    printf("Equivalent time in seconds :%d",total);
    	
	
	return 0;
}
