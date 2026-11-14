#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Factorial
//  Input           :   Integer (if input = 5 )
//  Output          :   Integer (output = 120 )
//  Description     :   It gives the factorial of the input (5*4*3*2*1)
//  Date            :   31/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0 , iFact = 1  ;

    if(iNo < 0 )                        // updater
    {
        iNo = -iNo ;

    }

    for(iCnt = iNo  ;  iCnt >= 1  ;  iCnt-- )
    {
        iFact = iFact * iCnt ;
        
    }
     return iFact;
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is %d ", iRet);

    return EXIT_SUCCESS; 

}