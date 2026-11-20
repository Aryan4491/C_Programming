#include <stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Display
//  Input           :   charecter
//  Output          :   void 
//  Description     :   accept charecter from user and display its ASCII value in octal , decimal and hexadecimal format
//  Date            :   16/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal\t\t%d\n", ch);
    printf("Octal\t\t%#o\n", ch);
    printf("Hexadecimal\t%#X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}