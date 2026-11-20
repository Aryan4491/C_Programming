#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   StrRevx
//  Input           :   String 
//  Output          :   void  
//  Description     :   Accept string from user and return the reverse string
//  Date            :   14/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrRevx(char *str)
{
   char *start = str;
   char *end = str ;
   char temp = '\0';

   while(*end != '\0')
   {
        end++;
   }
   end--;

   while(start < end)
   {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;

   }
}

int main()
{
    char arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s", arr);

    StrRevx(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS ;

}