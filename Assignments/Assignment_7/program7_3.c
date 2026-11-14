#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Display
//  Input           :   Integer (if input  4)
//  Output          :   void
//  Description     :   It is used to Displya number line (-4 -3 -2 -1 0 1 2 3 4 )
//  Date            :   30/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int  iCnt = 0 ;


    for(iCnt= -iNo ; iCnt <= iNo ; iCnt++)
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