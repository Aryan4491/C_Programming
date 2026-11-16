#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CountTwo
//  Input           :   Integer 
//  Output          :   Integer 
//  Description     :   It accept number from user and count the frequency of 2 in it 
//  Date            :   01/11/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{

    int iDigit = 0 ;
    int iCount = 0 ;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;

        if(iDigit == 2)
        {
            iCount++ ;
        }
        iNo = iNo / 10  ;
    }
    return iCount ;
}

int main()
{   
    int iValue  = 0 , iRet = 0 ;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    printf("%d\n", iRet);
    
    return EXIT_SUCCESS;
}
