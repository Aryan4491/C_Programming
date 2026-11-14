#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CircleArea
//  Input           :   Float
//  Output          :   Double
//  Description     :   It accept redius of circle from user and calculate its Area
//  Date            :   2/11/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////
double CircleArea(float fRadius)
{ 
    double dArea = 0.0 ;

    dArea = PI * fRadius * fRadius;

    return dArea ;
    
}

int main()
{
    float fValue = 0.0f ;
    double dRet = 0.0 ;

    printf("Enter redius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %.4lf \n ", dRet);

    return EXIT_SUCCESS;
}