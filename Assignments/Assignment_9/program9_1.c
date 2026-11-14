#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Display
//  Input           :   Integer 
//  Output          :   void
//  Description     :   Accept number from user and print the pattern
//  Date            :   1/11/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0 ; 

    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
        
    }
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("#\t");
        
    }
    printf("\n");
}

int main()
{
    int iValue = 0 ;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;

}