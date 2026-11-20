#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   DisplayASCII
//  Input           :   
//  Output          :   void
//  Description     :   Diplay ASCII table 
//  Date            :   16/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int i = 0;

    printf("%-8s %-8s %-8s %-8s\n", "Symbol", "Decimal", "Hex", "Octal");
    printf("----------------------------------------\n");

    for (i = 0; i <= 255; i++)
    {
       
        if (i >= 32 && i <= 126)
        {
            printf("%-8c %-8d %-8X %-8o\n", i, i, i, i);
        }
        else
        {
            printf("%-8s %-8d %-8X %-8o\n", "(n/p)", i, i, i);
        }
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}