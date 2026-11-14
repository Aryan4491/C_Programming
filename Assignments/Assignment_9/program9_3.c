#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   EvenFactorial
//  Input           :   Integer (if input = 5 )
//  Output          :   Integer (output = 8 )
//  Description     :   It gives the Even factorial of the input (4*2)
//  Date            :   1/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0 , iFact = 1 ;

        if(iNo < 0 )
        {
            iNo = -iNo ;
        }

        if (iNo == 0 || iNo == 1)
        {
             return 0 ;
        }

        for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            if(iCnt % 2 == 0)
            {
                iFact = iFact * iCnt ;
            }
        }
        return iFact;
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n ", iRet);

    return EXIT_SUCCESS;

}