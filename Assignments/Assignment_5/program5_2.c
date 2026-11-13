#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CheckLeapYear
//  Input           :   Integer (year)
//  Output          :   boolean
//  Description     :   It is use to Check whether the year is leap  year or not
//  Date            :   21/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////


bool CheckLeapYear(int iNo)
{
    if (((iNo % 4 == 0 ) && (iNo % 100 != 0 )) || (iNo % 400 == 0 ))
    {
        return true ;
    }
    else
    {
        return false ;
    
    }
}
int main()
{
    int iYear = 0 ;
    bool bRet = false ;


    printf("Enter Year :");
    scanf("%d",&iYear);

    bRet = CheckLeapYear(iYear);

    if(bRet)                    // true
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not A leap Year");
    } 


    return EXIT_SUCCESS;

}