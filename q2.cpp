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
	 
	 int mul=0,slesh=0,dollar=0,plus=0;
	
	switch(c1)
	{
		case '*' :
			mul= mul+1;
			break;
		case '#' :
			slesh= slesh+1;
			break;
		case '$' :
			dollar= dollar+1;
			break;
		case '+' :
			plus= plus+1;
			break;
			
	}
switch(c2)
	{
		case '*' :
			mul= mul+1;
			break;
		case '#' :
			slesh= slesh+1;
			break;
			case '$' :
			dollar= dollar+1;
			break;
			case '+' :
			plus= plus+1;
			break;
			
	}
	switch(c3)
	{
		case '*' :
			mul= mul+1;
			break;
		case '#' :
			slesh= slesh+1;
			break;
			case '$' :
			dollar= dollar+1;
			break;
			case '+' :
			plus= plus+1;
			break;
			
	}

switch(c4)
	{
		case '*' :
			mul= mul+1;
			break;
		case '#' :
			slesh= slesh+1;
			break;
			case '$' :
			dollar= dollar+1;
			break;
			case '+' :
			plus= plus+1;
			break;
			
	}
	switch(c5)
	{
		case '*' :
			mul= mul+1;
			break;
		case '#' :
			slesh= slesh+1;
			break;
			case '$' :
			dollar= dollar+1;
			break;
			case '+' :
			plus= plus+1;
			break;
			
	}
printf("\tnum of multiple %d\n",mul);
printf("\tnum of Hesh %d\n",slesh);
printf("\tnum of dollar %d\n",dollar);
printf("\tnum of plus %d\n",plus);

	return 0;
}
