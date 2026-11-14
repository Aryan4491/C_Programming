
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   DollarToINR
//  Input           :   Integer 
//  Output          :   Integer
//  Description     :   Converts US Dollars (USD) to Indian Rupees (INR)
//  Date            :   1/11/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iAns = 0 ; 
    iAns = iNo*70 ;

    return iAns ;
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter Number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is  %d\n", iRet);


    return EXIT_SUCCESS;
}