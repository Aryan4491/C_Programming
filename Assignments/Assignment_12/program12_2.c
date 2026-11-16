#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL ;
////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   ChkZero
//  Input           :   Integer 
//  Output          :   bool
//  Description     :   It accept number from user and check whether it contain zero or not
//  Date            :   01/11/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0 ;

        if(iNo == 0 )
        {
            return TRUE;
        }

        if(iNo < 0 )
        {
            iNo = -iNo;
        }

        while(iNo != 0 )
        {
            iDigit = iNo % 10 ;

            if(iDigit == 0)
            {
                return TRUE ;
            }

            iNo = iNo / 10  ;
        }
        return FALSE ;

}
int main()
{

    int iValue = 0 ;
    BOOL bRet = FALSE ;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("IT conatin Zero\n");

    }
    else
    {
        printf("There is no Zero\n");
    }

    return EXIT_SUCCESS;
}
