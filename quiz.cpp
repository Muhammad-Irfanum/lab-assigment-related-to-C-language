//Question no 1

#include<stdio.h>
int main()
{
	char c1,c2,c3,c4,c5;
	
	printf("Enter Any charachter \n");
	scanf(" %c",&c1);
	printf("Enter Any charachter \n");
	scanf(" %c",&c2);
	printf("Enter Any charachter \n");
	scanf(" %c",&c3);
	printf("Enter Any charachter \n");
	scanf(" %c",&c4);
	printf("Enter Any charachter \n");
	scanf(" %c",&c5);
	int mul=0,hesh=0,dollar=0,plus=0;

if(c1=='*')
{

mul=mul+1;
}
else if(c1=='#')
{

hesh= hesh+1;
}
else if(c1=='$')
{
dollar= dollar+1;
}
else if(c1=='+')
{

plus= plus+1;
}
if(c2=='*')
{


mul=mul+1;
}
else if(c2=='#')
{
hesh= hesh+1;
}
else if(c2=='$')
{

dollar= dollar+1;
}
else if(c2=='+')
{

plus= plus+1;
}
if(c3=='*')
{

mul=mul+1;
}
else if(c3=='#')
{
hesh= hesh+1;
}
else if(c3=='$')
{
dollar= dollar+1;
}
else if(c3=='+')
{
plus= plus+1;
}
if(c4=='*')
{
mul=mul+1;
}
else if(c4=='#')
{

hesh= hesh+1;
}
else if(c4=='$')
{

dollar= dollar+1;
}
else if(c4=='+')
{

plus= plus+1;
}
if(c5=='*')
{

mul=mul+1;
}
else if(c5=='#')
{

hesh= hesh+1;
}
else if(c5=='$')
{

dollar= dollar+1;
}
else if(c5=='+')
{

plus= plus+1;
}
printf("\tnum of multiple %d\n",mul);
printf("\tnum of Hesh %d\n",hesh);
printf("\tnum of dollar %d\n",dollar);
printf("\tnum of plus %d\n",plus);




	
	return 0;
}
