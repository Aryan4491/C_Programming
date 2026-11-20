#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   FirstChar
//  Input           :   String , Charecter 
//  Output          :   integer  
//  Description     :   Accept string from user and accept one charecter and return idex of first occurrence of that charecter
//  Date            :   14/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str , char ch)
{
    int iIndex = 0 ;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
    
        }
        iIndex++;
        str++;
    }
    return -1 ;
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

    iRet = FirstChar(arr ,cValue);

    printf("Character ferquency is %d\n ", iRet);

    return EXIT_SUCCESS ;

}