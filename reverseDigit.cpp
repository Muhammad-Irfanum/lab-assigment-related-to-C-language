/*(h) If a five-digit number is input through the keyboard, write a 
program to reverse the number.*/


#include<stdio.h>
int main()
{
	int ttd,thsd,hd,td,unitd,num,rev; 		//ten thousand digits(ttd), thousand digit(thsd)
										//hundard digit(hd), unitdigit, reverse(rev)
	printf("Enter 5 Digit numb :");
	scanf("%d",&num);
	
	ttd =num%10;
	printf("value Of 1st Digit :%d\n",ttd);
	num =num/10;
	rev =10000*ttd;
	
	thsd =num%10;
	printf("value Of 2nd Digit :%d\n",thsd);
	num =num/10;
	rev =1000*thsd + rev;
	
	hd =num%10;
	printf("value Of 3rd Digit :%d\n",hd);
	num =num/10;
	rev =100*hd + rev;
	
	td =num%10;
	printf("value Of 4th Digit :%d\n",td);
	num =num/10;
	rev =10*td + rev;
	
	unitd =num%10;
	printf("value Of 5th Digit :%d\n",unitd);
	num =num/1;
	rev =1*unitd + rev;
	
	
	printf("rev NUmb : %d",rev);
	return 0;
}

