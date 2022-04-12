
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    ch>=65 && ch<90;
    
    printf(" %c %c %c %c %c ", ch+32+1,ch+32+2,ch+32+3,ch+32+4,ch+32+5);
		

    return 0;
}
