#include<stdio.h>
#include<stdlib.h>

typedef int BOOL ;
#define TRUE 1 
#define FALSE 0 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   ChkGreater
//  Input           :   Integer 
//  Output          :   boolean
//  Description     :   which accept number from user check whether that number is greater 100 or not   
//  Date            :   04/11/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if(iNo > 100 )
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
    int iValue = 0 ;
    BOOL bRet = FALSE ;

    printf("Enter number :");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater\n");

    }
    else
    {
        printf("Smaller\n");
    }
    return EXIT_SUCCESS ;

}
