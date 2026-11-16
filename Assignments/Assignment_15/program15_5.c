#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Percentage
//  Input           :   Integer 
//  Output          :   Integer 
//  Description     :   which accept total marks and obtained marks from user and calculate percentage
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iTotal , int iObtained )
{
    float fPercent = 0.0f ;

    if(iTotal == 0)
    {
        return 0.0 ;
        
    }
    fPercent = ((float)iObtained / iTotal) * 100;

    return fPercent ;
    
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;
    float fRet = 0.0f ;

    printf("Enter Total Marks :");
    scanf("%d", &iValue1);

    printf("Enter obtained Marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1 ,iValue2); 

    printf("Precentage is %.2f \n" , fRet) ;

    return EXIT_SUCCESS ;

}