#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Pattern
//  Input           :   Integer(Row) , Integer(column)
//  Output          :   void
//  Description     :   Accept number of rows and columns  from user displya below pattern 
//  Date            :   05/11/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow ,int iCol)
{
    int i = 0 , j =0 ;
    char ch = '\0';

    for(i = 1 ,ch = 'A'; i <= iRow ; i++ , ch++)
    {
        for(j = 1  ; j <= iCol ; j++ )
        {
            printf("%C\t", ch );
        }
        printf("\n");
       
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0; 

    printf("Enter number of Rows :");
    scanf("%d", &iValue1 );

    printf("Enter number of columns :");
    scanf("%d", &iValue2);
    
    Pattern(iValue1 , iValue2);

    return EXIT_SUCCESS;

}