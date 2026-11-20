#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CountChar
//  Input           :   String , Charecter 
//  Output          :   integer  
//  Description     :   Accept string from user and accept one charecter and return frequency of that charecter 
//  Date            :   14/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str , char ch)
{
    int iCount = 0 ;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount ++;
        }
        str++;
    }
    return iCount ;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0 ;

    printf("Enter String:");
    scanf("%[^'\n']s", arr);

    printf("Enter the Charecter :");
    scanf(" %c", &cValue);

    iRet = CountChar(arr ,cValue);

    printf("character ferquency is %d\n ", iRet);

    return EXIT_SUCCESS ;

}