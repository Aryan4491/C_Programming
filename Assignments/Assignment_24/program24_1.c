#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   ChkChar
//  Input           :   String , Charecter 
//  Output          :   Boolean 
//  Description     :   Accept string from user and  accept one charecter and check charecter present in string or not
//  Date            :   14/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str , char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE ;
        }
        str++;

    }return FALSE;

}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE ;

    printf("Enter String:");
    scanf("%[^'\n']s", arr);

    printf("Enter the Charecter :");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr ,cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("character not found\n");
    }
    return EXIT_SUCCESS ;

}