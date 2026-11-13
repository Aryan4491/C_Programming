#include <stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   ChkVowel
//  Input           :   Charecter
//  Output          :   boolean
//  Description     :   accept  Charecter from user check Whether number is vowel or not 
//  Date            :   22/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' ||
       cValue == 'i' || cValue == 'o' ||
       cValue == 'u' || cValue == 'A' ||
       cValue == 'E' || cValue == 'I' ||
       cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return EXIT_SUCCESS;
}
