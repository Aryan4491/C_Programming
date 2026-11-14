#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Display
//  Input           :   Integer (if input  5)
//  Output          :   void
//  Description     :   It is used to Displya number (1 2 3 4 5)
//  Date            :   30/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int  iCnt = 0 ;

    if( iNo < 0 )               //Updater 
    {
        iNo = -iNo;
    }

    for(iCnt= 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");

}
int main()
{
    int iValue = 0 ;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Display(iValue);


    return EXIT_SUCCESS;

}