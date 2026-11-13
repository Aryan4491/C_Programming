#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CheckNumber
//  Input           :   Integer 
//  Output          :   void
//  Description     :   Checks whether the given integer is an even number or odd number
//  Date            :   21/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo %  2 == 0 )
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter a number :");
    scanf("%d",&iValue);
    
    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
