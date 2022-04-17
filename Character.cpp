	/*Problem 6: 
		Input 5 characters from the user and display the number of Vowel,
 		the number of Consonant, the number of Capital Letters, 
		the number of Small Letters, and the number of Digits amongst the 5 values using if-else-if.*/
	

#include<stdio.h>
int main()
{
	char c1,c2,c3,c4,c5;
	int vowel=0, cons=0,c_l=0,s_l=0,digit=0;
	printf("Enter 1 character :");
	scanf(" %c",&c1);
	printf("Enter 2 character :");
	scanf(" %c",&c2);
	printf("Enter 3 character :");
	scanf(" %c",&c3);
	printf("Enter 4 character :");
	scanf(" %c",&c4);
	printf("Enter 5 character :");
	scanf(" %c",&c5);
	
	if(c1=='a'||c1=='e'||c1=='i'||c1=='o'||c1=='u')
	{
	printf("vowle\n");
		vowel= vowel+1;
		s_l= s_l+1;
	}
	else if(c1=='A'||c1=='E'||c1=='I'||c1=='O'||c1=='U')
	{
	vowel= vowel+1;
		c_l=c_l+1;
	}
	else if (c1>=65&&c1<90)
	{
		cons= cons+1;
		
		c_l=c_l+1;
	}
	else if(c1>=97&&c1<122)
	{
	cons= cons +1;
	s_l=s_l+1;
}
else if (c1>=48&&c1<=57)
	{
		printf("It is Digit\n");
		digit=digit+1;
	}

	if(c2=='a'||c2=='e'||c2=='i'||c2=='o'||c2=='u')
	{
	
		vowel= vowel+1;
		s_l= s_l+1;
	}
	else if(c2=='A'||c2=='E'||c2=='I'||c2=='O'||c2=='U')
	{
	
	vowel= vowel+1;
		c_l=c_l+1;
	}
	else if (c2>=65&&c2<=90)
	{
		cons= cons+1;
		c_l=c_l+1;
	}
	else if(c2>=97&&c2<=122)
	{
	cons = cons +1;
	s_l=s_l+1;
}
	else if (c2>=48&&c2<=57)
	{
		printf("It is Digit\n");
		digit=digit+1;
	}
	if(c3=='a'||c3=='e'||c3=='i'||c3=='o'||c3=='u')
	{
	
		vowel= vowel+1;
		s_l= s_l+1;
	}
	else if(c3=='A'||c3=='E'||c3=='I'||c3=='O'||c3=='U')
	{
	
	vowel= vowel+1;
		c_l=c_l+1;
	}
		else if (c3>=65&&c3<=90)
	{
		cons= cons+1;
		
		c_l=c_l+1;
	}
	else if(c3>=97&&c3<=122)
	{
	cons = cons +1;
	s_l=s_l+1;
}
	else if (c3>=48&&c3<=57)
	{
		printf("It is Digit\n");
		digit=digit+1;
	}
	if(c4=='a'||c4=='e'||c4=='i'||c4=='o'||c4=='u')
	{
	
		vowel= vowel+1;
		s_l= s_l+1;
	}
	else if(c4=='A'||c4=='E'||c4=='I'||c4=='O'||c4=='U')
	{
	
	vowel= vowel+1;
		c_l=c_l+1;
	}
		else if (c4>=65&&c4<=90)
	{
		cons= cons+1;
		
				c_l=c_l+1;
	}
	else if(c4>=97&&c4<=122)
	{
	cons = cons +1;
	s_l=s_l+1;
}
	else if (c4>=48&&c4<=57)
	{
		printf("It is Digit\n");
		digit=digit+1;
	}
	if(c5=='a'||c5=='e'||c5=='i'||c5=='o'||c5=='u')
	{

		vowel= vowel+1;
		s_l= s_l+1;
	}
	
	else if(c5=='A'||c5=='E'||c5=='I'||c5=='O'||c5=='U')
	{
	
	vowel= vowel+1;
		c_l=c_l+1;
	}
		else if (c5>=65&&c5<=90)
	{
		cons= cons+1;
		
				c_l=c_l+1;
	}
	else if(c5>=97&&c5<=122)
	{
	cons = cons +1;
	s_l=s_l+1;
}
else if (c5>=48&&c5<=57)
	{
		printf("It is Digit\n");
		digit=digit+1;
	}
	printf("-------------------------------------\n");
	printf("total vowle %d\n",vowel);
	printf("total cons %d\n",cons);
	printf("total small letter %d\n",s_l);
	printf("total capital letter %d \n",c_l);
	printf("TOtal digits %d",digit);
		
	return 0;
	}		
