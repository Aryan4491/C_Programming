#include <stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Display
//  Input           :   void 
//  Output          :   void
//  Description     :   It used to  display number in reverse order 
//  Date            :   20/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////
void Display()
{
    int i = 0;

    i = 5;

    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}
