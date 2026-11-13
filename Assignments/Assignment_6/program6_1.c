#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   calculateElextricityBill
//  Input           :   Integer(Units consumed)
//  Output          :   Float (Total Bill Amount)
//  Description     :   Calculates tiered electricity bill based on units
//  Date            :   22/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////
float calculateElextricityBill(int iNum)
{
    float fBill = 0.0f;

    if( iNum < 100 )
    {
       fBill = iNum*5 ;
    }
    else if ( iNum <= 200)
    {
        fBill = (100*5)+(iNum - 100)*7 ; 
    }
    else
    {
        fBill = (100*5)+(100*7)+ ((iNum-200)*10) ;
    }
    return fBill;
}

int main()
{
    int iUnits = 0 ;
    float fret = 0 ;

    printf("Enter consumed units :");
    scanf("%d",&iUnits);

   fret = calculateElextricityBill(iUnits);

   printf(" Bill = %f",fret);
    

    return EXIT_SUCCESS;
}