#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CheckDivisible
//  Input           :   Integer 
//  Output          :   void
//  Description     :   It is used to check Whether the input number is Divisible by 5 or not 
//  Date            :   21/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void CheckDivisible( int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("It is Divisible by 5");
    }
    else 
    {
        printf("It is not Divisible by 5");
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter number:\n ");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}
