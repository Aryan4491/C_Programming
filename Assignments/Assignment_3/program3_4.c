#include <stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   DisplayConvert
//  Input           :   Charecter
//  Output          :   void
//  Description     :   accept  Charecter from user and convert case of that charecter
//  Date            :   21/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}
