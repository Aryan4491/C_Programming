#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   OddFactorial
//  Input           :   Integer (if input = 5 )
//  Output          :   Integer (output = 15 )
//  Description     :   It gives the odd factorial of the input (5*3*1)
//  Date            :   1/11/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0 , iFact = 1 ;

        if(iNo < 0 )
        {
            iNo = -iNo ;
        }

        if (iNo == 0)
        {
             return 0 ;
        }

        for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            if(iCnt % 2 != 0)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n ", iRet);

    return EXIT_SUCCESS;

}