#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   MultDigits
//  Input           :   Integer 
//  Output          :   Integer 
//  Description     :   It accept number from user and return Multiplication of all  digits 
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{

    int iDigit = 0 ;
    int iMulti = 1 ;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    if(iNo == 0 )
    {
        return 0 ;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;

        if(iDigit != 0 )
        {
            iMulti = iMulti * iDigit ;
        }
        iNo = iNo / 10  ;
    }
    return iMulti ;
}

int main()
{   
    int iValue  = 0 , iRet = 0 ;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);
    
    return EXIT_SUCCESS;
}