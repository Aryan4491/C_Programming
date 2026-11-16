#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   RangeDisplay
//  Input           :   Integer , Integer 
//  Output          :   void
//  Description     :   It accept range from user and display all number in that range
//  Date            :   31/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart , int iEnd)
{
    int iCnt = 0 ;

    if(iEnd < iStart )
    {
        printf("Invalide range");
    }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        printf("%d\t", iCnt );
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0 ;

    printf("Enter satrting point :");
    scanf("%d",&iValue1);

    printf("Enter Ending point :");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1 , iValue2);


    return EXIT_SUCCESS;

}
