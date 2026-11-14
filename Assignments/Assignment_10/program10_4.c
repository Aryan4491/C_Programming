#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   FhtoCs
//  Input           :   float
//  Output          :   double 
//  Description     :   It accept Temprature in fahrenheit and convert it into Celsisus
//  Date            :   2/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////
double FhtoCs(float fTemp )
{
    double dCelsius = 0.0 ;

    dCelsius = (fTemp - 32)* (5.0 /9.0) ;

    return dCelsius ;
}

int main()
{
    float fValue = 0.0f ;
    double dRet = 0.0 ;

    printf("Enter temperature in  fahrenheit : ");
    scanf("%f", &fValue );

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius : %.4lf\n", dRet);

    return EXIT_SUCCESS;
}