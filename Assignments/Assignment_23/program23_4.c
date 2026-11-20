#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   DiplayDigits
//  Input           :   String
//  Output          :   void
//  Description     :   accept string from user and display only digits from that string
//  Date            :   13/11/2026  
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  DiplayDigits(char *str)
{

    while( *str != '\0')
    {
        if(*str >='0' && *str <= '9')
        {
           printf("%c", *str);
        }
        str++;
    }
} 

int main()
{ 
    char arr[20];
    
    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    DiplayDigits(arr);

    return EXIT_SUCCESS;
}