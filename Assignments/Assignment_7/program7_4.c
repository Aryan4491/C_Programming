#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   OddDisplay
//  Input           :   Integer 
//  Output          :   void
//  Description     :   It is used to Displya  all odd number up to N 
//  Date            :   30/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int  iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
       if(iCnt % 2 != 0)
       {
            printf("%d\t", iCnt);
       }
    }
    printf("\n");

}
int main()
{
    int iValue = 0 ;

    printf("Enter Number :");
    scanf("%d", &iValue);

    OddDisplay(iValue);


    return EXIT_SUCCESS;

}