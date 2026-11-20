#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Struprx
//  Input           :   String
//  Output          :   void
//  Description     :   Accept String from user and convert it into upper case
//  Date            :   13/11/2026  
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  Struprx(char *str)
{

    while( *str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
} 

int main()
{ 
    char arr[20];
    
    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    Struprx(arr);

    printf("Modified string is  %s\n",  arr);

    return EXIT_SUCCESS;
}