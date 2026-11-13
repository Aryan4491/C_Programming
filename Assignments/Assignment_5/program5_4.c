#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CheckMultipleDivisibility
//  Input           :   Integer iNo
//  Output          :   void
//  Description     :   Checks whether a given number is divisible 
//                      by both 3 and 5, divisible by only 5, 
//                      divisible by only 3, or divisible by neither.
//  Date            :   21/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iNo)
{
    if (((iNo % 5) == 0 ) && ((iNo % 3 )== 0 ))
    {
        printf("Number is divisible  both ");

        
    }
    else if (iNo % 5 == 0 )
    {
        printf("Divisible by 5");

    }
    else if (iNo % 3 == 0 )
    {
        printf("Divisible by 3");
    }
    else
    {
        printf("Not divisible by either");
    }
}
int main()
{
    int iValue = 0 ;
    

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);
    
    

    return EXIT_SUCCESS;
}