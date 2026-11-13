#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CheckCharecterType
//  Input           :   charecter
//  Output          :   void
//  Description     :   Checks whether the given character is an Uppercase alphabet, lowercase alphabet, 
//                      digit, or a special character.
//  Date            :   21/10/2026 
//  Author          :   Aryan Shankar Gole
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckCharecterType(char cWord)
{           
    if((cWord >= 'A') && (cWord <= 'Z'))
    {
        printf("Uppercase Aphabet");
    }
    else if((cWord >= 'a') && (cWord <= 'z'))
    {
        printf("lowercase Aphabet");
    }
    else if((cWord >= '0') && (cWord <= '9'))
    {
        printf("Digit");

    }
    else{
        printf("Special Charecter");
    }
}
int main()
{
    char cValue = '\0' ;
    

    printf("Enter Charecter : ");
    scanf("%c" ,&cValue);

    CheckCharecterType(cValue);

    return EXIT_SUCCESS;
}