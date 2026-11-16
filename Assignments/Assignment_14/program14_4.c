#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   SumNonFact
//  Input           :   Integer 
//  Output          :   Integer
//  Description     :   It accept number from user and return summation of all its non factors 
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0 ,  iSum = 0;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
           iSum = iSum + iCnt ;
        }
    }
    return iSum ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;

}