#include <stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   PrintEven
//  Input           :   Integer
//  Output          :   void
//  Description     :   accept  number from user and print that number of even number on screen
//  Date            :   21/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        return;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS ;
}
