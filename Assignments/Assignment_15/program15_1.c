#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   
//  Input           :   String 
//  Output          :   String
//  Description     :   which accept name from user and print that name  
//  Date            :   04/10/2026 
//  Author          :   Aryan Shankar Gole
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("please enter name :");
    scanf("%[^'\n']s",Name);

    printf("Your name is %s ",Name);

    return EXIT_SUCCESS;

}