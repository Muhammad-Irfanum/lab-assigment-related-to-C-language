//Problem 4: Ask the user to enter marks obtained in three courses. Then display a menu

#include<stdio.h>
int main()
{
	int eng,urdu,maths;
	float per,total=300,sum;
	int op,grade;
	
	printf("Enter Your English Obtain Marks :");
	scanf("%d",&eng);
	printf("Enter Your Urdu Obtain Marks :");
	scanf("%d",&urdu);
	printf("Enter Your Mathematics Obtain Marks :");
	scanf("%d",&maths);
	printf("----------------------------------------------\n");
	printf("Press 1 to calculate percentage\n:");
	
	printf("Press 2 to display grade\n:");
	scanf("%d",&op);	
	printf("----------------------------------------------\n");
	sum= eng+urdu+maths;
	per= (sum/total)*100;
	
	
		if(per>80)
	{
	grade = 1;
}
	else if(per>=70&&per<80)
{
		grade=2;
}
	else if(per>=60&&per<70)
	{
	grade=3;
	}
		else if(per>=50&&per<60)
	{
		grade=4;
	}
		else if(per<50)
	{
		grade=5;
	}
	
	switch(op)
	{
	case 1:
		per= (sum/total)*100;
		printf("Your percentage is %.1f",per);
		break;
	case 2:
		switch(grade)
		{
			case 1:
				printf("Grade: A+ ");
				break;
			case 2:
				printf("Grade: A ");
				break;
			case 3:
				printf("Grade: B+ ");
				break;
			case 4:
				printf("Grade: B ");
				break;	
			case 5:
				printf("Grade: F ");
				break;		
			}	
		
	}
	
	
	
	
	
	
	
		
	return 0;
}
