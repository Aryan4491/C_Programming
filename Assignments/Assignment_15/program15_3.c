#include<stdio.h>
#include<stdlib.h>

typedef int BOOL ;
#define TRUE 1 
#define FALSE 0 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   ChkEqual
//  Input           :   Integer ,  Integer
//  Output          :   boolean
//  Description     :   which accept two number  from user check whether that numbers are equal or not  
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2 )
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
    int iValue1 = 0 , iValue2 = 0 ;
    BOOL bRet = FALSE ;

    printf("Enter two number :");
    scanf("%d %d", &iValue1 ,&iValue2);

    bRet = ChkEqual(iValue1 , iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");

    }
    else
    {
        printf("Not Equal \n");
    }
    return EXIT_SUCCESS ;

}
