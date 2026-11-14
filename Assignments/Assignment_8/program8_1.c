#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Number
//  Input           :   Integer 
//  Output          :   void
//  Description     :   Prints the category of the number based on its value.
//  Date            :   31/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50 )
    {
        printf("Small");
    }
    else if (iNo >= 50  && iNo <= 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Greater");
    }
    printf("\n");
}

int main()
{
    int iValue = 0 ;

    printf("Enter number :");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;

}