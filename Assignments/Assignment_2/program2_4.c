#include <stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Display
//  Input           :   Integer, integer
//  Output          :   void
//  Description     :   Accept two number from user and displya first number in second number of times 
//  Date            :   20/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////
void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

   
    for (iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}
