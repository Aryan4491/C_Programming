#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   MultipleDisplay
//  Input           :   Integer 
//  Output          :   void
//  Description     :   It is used to displays the first 5 multiples of the input number
//  Date            :   30/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int  iCnt = 0 ;

    iCnt = 1;

    if( iNo < 0 )               //Updater 
    {
        iNo = -iNo;
    }
   
    while(iCnt <= iNo*5)
    {
       if(iCnt % iNo == 0)
       {
            printf("%d\t", iCnt);
       }
       iCnt++;
    }
    printf("\n");

}
int main()
{
    int iValue = 0 ;

    printf("Enter Number :");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);


    return EXIT_SUCCESS;

}