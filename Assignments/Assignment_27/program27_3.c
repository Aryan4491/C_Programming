#include <stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Difference
//  Input           :   String 
//  Output          :   integer
//  Description     :   Accept string from user and return difference between ferquncy of small and capital charecter
//  Date            :   18/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCnt--;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}