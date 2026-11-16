#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   NonFact
//  Input           :   Integer 
//  Output          :   void
//  Description     :   It accept number from user and displya all its non factors 
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0 ,  iMulti = 1;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");

}

int main()
{
    int iValue = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;

}