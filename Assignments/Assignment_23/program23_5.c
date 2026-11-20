#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   DiplayDigits
//  Input           :   String
//  Output          :   Integer 
//  Description     :   Accept string from user and count number of White Spaces
//  Date            :   13/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0 ;

    while( *str != '\0')
    {
        if(*str == ' ')
        {

            iCount++;

        } 
        str++;

    }return iCount ;
} 

int main()
{ 
    char arr[20];
    int iRet = 0;

    
    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}