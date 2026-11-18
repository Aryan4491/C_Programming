#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Pattern
//  Input           :   Integer(Row) , Integer(column)
//  Output          :   void
//  Description     :   Accept number of rows and columns  from user display below pattern 
//  Date            :   12/11/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0 ;
    char ch = '\0';
    
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
            
        printf("%d\t*\t", iCnt );
        
    }printf("\n");
}

int main()
{
    int iValue = 0 ; 

    printf("Enter number of Elements :");
    scanf("%d", &iValue);


    Pattern(iValue);

    return EXIT_SUCCESS;
}