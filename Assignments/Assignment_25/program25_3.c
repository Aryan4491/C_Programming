#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   ChkDigit
//  Input           :   Charecter
//  Output          :   Boolean
//  Description     :   Accept charecter from user and check whether it is Digit or not(0-9)
//  Date            :   15/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkDigit(char ch)
{
    if (ch >= 48 && ch <= 57)
    {
        return TRUE ;
    }
    else
    {
        return FALSE ;

    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE ;

    printf("Enter Charecter : ");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit\n");

    }
    else
    {
        printf("It is not Digit\n");
    }
    return EXIT_SUCCESS;
}