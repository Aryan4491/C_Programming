#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   FactDiff
//  Input           :   Integer 
//  Output          :   Integer
//  Description     :   It accept number from user and return difference between summation of all its factors and non factors 
//  Date            :   03/11/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0 ,  iFact = 0 , iNonFact = 0 ;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact = iFact + iCnt ;
        }
        else
        {
            iNonFact = iNonFact + iCnt ;
        }
    }
    return iFact - iNonFact ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;

}
