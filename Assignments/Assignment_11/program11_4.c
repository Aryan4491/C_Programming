#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   RangeSumEven
//  Input           :   Integer , Integer 
//  Output          :   Integer
//  Description     :   It accept range from user and return addition of all Even number in that range
//  Date            :   31/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart , int iEnd)
{
    int iCnt = 0 ,  iSum = 0 ;

    
    if((iStart <= iEnd ) && (iStart >= 0))
    {
        for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
        {
            if( iCnt % 2 == 0 )
            {
                 iSum = iSum + iCnt ;
            } 
        }
        return iSum ;
    }
    else
    {
       return -1 ;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0  , iRet =  0 ;

    printf("Enter satrting point :");
    scanf("%d",&iValue1);

    printf("Enter Ending point :");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1 , iValue2);

    if(iRet == -1)
    {
        printf("Invalide reange \n ");

    }
    else
    {
        printf("Addition is  %d\n", iRet);
    }


    return EXIT_SUCCESS;

}
