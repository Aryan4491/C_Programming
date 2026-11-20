#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   ChkAlpha
//  Input           :   Charecter
//  Output          :   Boolean
//  Description     :   Accept charecter from user and check whether it is alphabet or not(a-z)(A-Z)
//  Date            :   15/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkAlpha(char ch)
{
    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is charecter\n");

    }
    else
    {
        printf("It is not charecter\n");
    }
    return EXIT_SUCCESS;
}