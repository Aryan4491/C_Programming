#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   RangeDisplayRev
//  Input           :   Integer ,Integer 
//  Output          :   void
//  Description     :   It accept range from user and display all number in that range in reverse order 
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart , int iEnd)
{
    int iCnt = 0 ;

    if(iStart > iEnd )
    {
        printf("Invalide range");
    }

    for(iCnt = iEnd ; iCnt >= iStart ; iCnt--)
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

    RangeDisplayRev(iValue1 , iValue2);


    return EXIT_SUCCESS;

}