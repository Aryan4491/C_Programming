#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   FindGreater
//  Input           :   Integer ,Integer
//  Output          :   void
//  Description     :   Compares two numbers and displays which one 
//                      is greater, or if they are equal.
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void FindGreater(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        printf( " %d Greater number ", iNo1);
    }
    else if(iNo1 < iNo2)
    {
        printf(" %d Greater number ", iNo2);
    }
    else
    {
        printf("Both are Equal");
    }

}
int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    printf("Enter two number: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;

}