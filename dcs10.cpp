/*10.Write a C program to input any character and if its uppercase alphabet then convert it into lowercase alphabet 
and vice versa using switch case.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c",&ch);
    switch(ch)
    {
    	case 'A' ... 'Z': ch=ch+32;
    	                 
    	                 break;
        case 'a' ... 'z': ch=ch-32;
                         break;
    }
        printf("%c",ch);
		return 0;
}
