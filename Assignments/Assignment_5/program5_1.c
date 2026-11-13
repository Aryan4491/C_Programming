#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   FindGreatest
//  Input           :   Integer , Integer , Integer
//  Output          :   Integer
//  Description     :   Compares three integer numbers and returns the largest value among them.
//  Date            :   21/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

int FindGreatest(int ifirst , int isecond , int ithird)
{
    if ((ifirst >=  isecond) && (ifirst >= ithird))
    {
        return ifirst;
    }
    else if((isecond >= ifirst) && (isecond >= ithird))
    {
         return isecond;
    }
    else
    {
        return ithird;
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0  ;
    int iResult = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1,&iValue2,&iValue3);

    iResult = FindGreatest(iValue1,iValue2,iValue3);

    printf("%d is Gretest", iResult);
    return EXIT_SUCCESS;

}