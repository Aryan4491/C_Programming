#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CheckNumber
//  Input           :   Integer 
//  Output          :   void
//  Description     :   Determines whether the given integer is a 
//                      Positive number, Negative number, or Zero.
//  Date            :   21/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo > 0 )
    {
        printf("Positive Number");
    }
    else if (iNo < 0 )
    {
        printf("Negative Number");
    }
    else
    {
        printf("zero");
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
