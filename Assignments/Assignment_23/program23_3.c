#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Strtogglex
//  Input           :   String
//  Output          :   void
//  Description     :   Accept String from user and toggle the case
//  Date            :   13/11/2026  
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  Strtogglex(char *str)
{

    while( *str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
} 

int main()
{ 
    char arr[20];
    
    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    Strtogglex(arr);

    printf("Modified string is  %s\n",  arr);

    return EXIT_SUCCESS;
}