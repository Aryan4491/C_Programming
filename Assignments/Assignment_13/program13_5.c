#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CountDiff
//  Input           :   Integer 
//  Output          :   Integer 
//  Description     :   It accept number from user and return difference between summation of even and summation of even
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0 ;
    int iEsum = 0 , iOsum = 0 ;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    if(iNo == 0 )
    {
        return 0 ;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;

        if(iDigit % 2== 0 )
        {
            iEsum = iEsum + iDigit ;
        }
        else
        {
            iOsum = iOsum + iDigit ;
        }

        iNo = iNo / 10  ;
    }
    return iEsum - iOsum ;
}

int main()
{   
    int iValue  = 0 , iRet = 0 ;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n", iRet);
    
    return EXIT_SUCCESS;
}