#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   KMtoMeter
//  Input           :   integer
//  Output          :   integer 
//  Description     :   It accept distance in Kilometer and convert it into meter 
//  Date            :   2/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////
int KMtoMeter(int iNo)
{ 
    int  iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter ;
    
}

int main()
{
    int  iValue = 0 , iRet = 0 ;

    printf("Enter Distance in KM : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Conveting into Meter : %d\n ", iRet);

    return EXIT_SUCCESS;
}