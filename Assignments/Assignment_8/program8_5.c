#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   TableRev
//  Input           :   Integer 
//  Output          :   void
//  Description     :   It gives accept number from user and display its table in Reverse  
//  Date            :   31/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
        int iCnt = 0 ;
        

        if(iNo < 0 )                        // updater
        {
            iNo = -iNo ;

        }

        for(iCnt = 10 ;  iCnt >= 1  ;  iCnt--)
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

    TableRev(iValue);

    return EXIT_SUCCESS; 

}
