#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Table
//  Input           :   Integer 
//  Output          :   void
//  Description     :   It gives accept number from user and display its table 
//  Date            :   31/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
        int iCnt = 0 ;
        

        if(iNo < 0 )                        // updater
        {
            iNo = -iNo ;

        }

        for(iCnt = 1  ;  iCnt <= 10  ;  iCnt++ )
        {
            
            printf("%d\t", iNo*iCnt);
            
        }
        printf("\n");
}

int main()
{
    int iValue = 0  ;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS; 

}
