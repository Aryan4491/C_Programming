#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   ChkCapital
//  Input           :   Charecter
//  Output          :   Boolean
//  Description     :   Accept charecter from user and check whether it is chapital  or not(A-Z)
//  Date            :   15/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    if (ch >= 65 && ch <= 90)
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital charecter\n");

    }
    else
    {
        printf("It is not capital charecter\n");
    }
    return EXIT_SUCCESS;
}