#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Display
//  Input           :   charecter
//  Output          :   void
//  Description     :   accept charecter from user and the charecter is small displya its corresponding capital 
//  Date            :   16/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    printf("%c", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}