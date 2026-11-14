#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   FactorialDiff
//  Input           :   Integer (if input : 5)
//  Output          :   Integer (-7)
//  Description     :   It gives the difference of Even and Odd factorial of the input (8 - 15 = -7)
//  Date            :   1/11/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0 , iAns = 0 , iEven = 1 , iOdd = 1 ;

        if(iNo < 0 )
        {
            iNo = -iNo ;
        }


        for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            if(iCnt % 2 != 0)
            {
                iOdd = iOdd * iCnt ;
            }
        }

         for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            if(iCnt % 2 == 0)
            {
                iEven = iEven * iCnt ;
            }
        }

        iAns = iEven - iOdd ;
        return iAns ;
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference  is %d\n ", iRet);

    return EXIT_SUCCESS;

}