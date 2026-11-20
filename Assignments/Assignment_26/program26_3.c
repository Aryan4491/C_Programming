#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Display
//  Input           :   charecter
//  Output          :   void
//  Description     :   accept charecter from user and if capital display all charecter from input charecter till z
//  Date            :   16/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        while (ch <= 'Z')
        {
            printf("%c ", ch);
            ch++;
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        while (ch >= 'a')
        {
            printf("%c ", ch);
            ch--;
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}