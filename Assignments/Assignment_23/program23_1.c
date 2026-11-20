#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Strlwrx
//  Input           :   String
//  Output          :   void
//  Description     :   Accept String from user and convert it into lower case
//  Date            :   13/11/2026  
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  Strlwrx(char *str)
{

    while( *str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    Strlwrx(arr);

    printf("Modified string is  %s\n",  arr);

    return EXIT_SUCCESS;
}