#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   RectArea
//  Input           :   float (width) , float(height)
//  Output          :   double
//  Description     :   It accept width and height  of Rectangle from user and calculate its Area
//  Date            :   2/11/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////
double RectArea(float fWidth , float fHeight )
{ 
    double dArea = 0.0 ;

    dArea =  fWidth * fHeight ;
    return dArea ;
    
}

int main()
{
    float fValue1 = 0.0f ,  fValue2 = 0.0f ;
    double dRet = 0.0 ;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 , fValue2);

    printf("Area of Rectangle :  %.3lf \n ", dRet);

    return EXIT_SUCCESS;
}