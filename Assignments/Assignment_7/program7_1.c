#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Pattern
//  Input           :   Integer
//  Output          :   void
//  Description     :   It is used to print pattern
//  Date            :   30/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int  iCnt = 0 ;

    if( iNo < 0 )               //Updater 
    {
        iNo = -iNo;
    }

    for(iCnt= 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");

}
int main()
{
    int iValue = 0 ;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Pattern(iValue);


    return EXIT_SUCCESS;

}