#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   LastChar
//  Input           :   String , Charecter 
//  Output          :   integer  
//  Description     :   Accept string from user and accept one charecter and return idex of Last occurrence of that charecter
//  Date            :   14/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int LastChar(char *str , char ch)
{
    int iIndex = 0 ;
    int iLastIndex = -1 ;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           
           iLastIndex = iIndex;
            
        }
        iIndex++;
        str++;
    }
    return iLastIndex ;
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

    iRet = LastChar(arr ,cValue);

    printf("Character ferquency is %d\n ", iRet);

    return EXIT_SUCCESS ;

}