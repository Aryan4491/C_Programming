#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Pattern
//  Input           :   Integer(Row) , Integer(column)
//  Output          :   void
//  Description     :   Accept number of rows and columns  from user display below pattern 
//  Date            :   08/11/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  Pattern(int iRow , int iCol)
{
    int i = 0  , j = 0 ;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if(i == 1 || j == 1  || i < j )
            {
                printf("*\t");
            }
        }printf("\n");
            
    }
}

int main()
{
    int  iValue1 = 0 , iValue2 = 0 ;

    printf("Enter number of  row :");
    scanf("%d", &iValue1);

    printf("Enter number of column:");
    scanf("%d", &iValue2);

    Pattern(iValue1 , iValue2);

    return EXIT_SUCCESS ;

}