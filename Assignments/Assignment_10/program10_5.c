#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   SquareMeter
//  Input           :   integer
//  Output          :   double 
//  Description     :   It accept area in square feet and convert it into square meter
//  Date            :   2/11/2026  
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////
double SquareMeter(int iValue )
{
    double dSmeter = 0.0 ;

    dSmeter = iValue * 0.092903 ;

    return dSmeter ;
}

int main()
{
    int  iValue = 0 ;
    double dRet = 0.0 ;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue );

    dRet = SquareMeter(iValue);

    printf("convert area in square meter : %.6lf\n", dRet);

    return EXIT_SUCCESS;
}