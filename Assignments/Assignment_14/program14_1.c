#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   MultFact
//  Input           :   Integer 
//  Output          :   Integer 
//  Description     :   It accept number from user and displya its multiplication of factors
//  Date            :   03/11/2026
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0 ,  iMulti = 1;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMulti = iMulti * iCnt ;
        }
    }
    return iMulti ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);
    
    return EXIT_SUCCESS;

}
