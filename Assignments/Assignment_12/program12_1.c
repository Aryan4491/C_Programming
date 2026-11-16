#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   DisplayDigit
//  Input           :   Integer 
//  Output          :   void
//  Description     :   It accept number from user and display digits in reverse order
//  Date            :   01/11/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{

    int iDigit = 0 ;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
        printf("%d\n", iDigit);
        iNo = iNo / 10  ;
    }
}

int main()
{   
    int iValue  = 0 ;

    printf("Enter Number :");
    scanf("%d", &iValue);

    DisplayDigit(iValue);
    
    return EXIT_SUCCESS;

}
