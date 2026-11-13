#include <stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   ChkEven
//  Input           :   Integer
//  Output          :   boolean
//  Description     :   accept  number from user check Whether number is Even or odd 
//  Date            :   20/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if ((iNo % 2) == 0)
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

    bRet = ChkEven(iValue);

    
    if (bRet == TRUE)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return EXIT_SUCCESS;
}
