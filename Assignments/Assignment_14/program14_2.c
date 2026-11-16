#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   FactRev
//  Input           :   Integer 
//  Output          :   void
//  Description     :   It accept number from user and displya its  factors in decreasing order
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0 ,  iMulti = 1;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    for(iCnt = iNo/2 ; iCnt >= 1 ; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    FactRev(iValue);

    
    return EXIT_SUCCESS;

}