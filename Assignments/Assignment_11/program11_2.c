#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   RangeDisplayEven
//  Input           :   Integer , Integer 
//  Output          :   void
//  Description     :   It accept range from user and display all Even number  in that range
//  Date            :   31/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////


void RangeDisplayEven(int iStart , int iEnd)
{
    int iCnt = 0 ;
    

    if(iEnd < iStart )
    {
        printf("Invalide range \n");
    }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0 )
        {
            printf("%d\t", iCnt );
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0 ;

    printf("Enter satrting point :");
    scanf("%d",&iValue1);

    printf("Enter Ending point :");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1 , iValue2);


    return EXIT_SUCCESS;

}
