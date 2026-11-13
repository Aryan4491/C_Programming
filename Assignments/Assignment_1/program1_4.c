#include <stdio.h>
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Check
//  Input           :   Integer
//  Output          :   Boolean
//  Description     :   It used to Check the input number is divisible by 5  
//  Date            :   22/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if (bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return EXIT_SUCCESS;
}