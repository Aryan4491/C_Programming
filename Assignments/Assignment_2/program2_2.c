#include <stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Display
//  Input           :   Integer
//  Output          :   void
//  Description     :   accept  one number from user  and  print  number of * 
//  Date            :   20/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo < 0 )
    {
        iNo = -iNo;
    }
   
    while (iNo > 0)
    {
        printf("* ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
