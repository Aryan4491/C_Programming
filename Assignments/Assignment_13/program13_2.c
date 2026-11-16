#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CountOdd
//  Input           :   Integer 
//  Output          :   Integer 
//  Description     :   It accept number from user and return count of Odd Digits  
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{

    int iDigit = 0 ;
    int iCount = 0 ;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;

        if(iDigit % 2 != 0 )
        {
            iCount++ ;
        }
        iNo = iNo / 10  ;
    }
    return iCount ;
}

int main()
{   
    int iValue  = 0 , iRet = 0 ;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("%d\n", iRet);
    
    return EXIT_SUCCESS;
}