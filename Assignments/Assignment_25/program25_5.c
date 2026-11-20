#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function name   :   DisplayScheduler
//  Input           :   Charecter
//  Output          :   void
//  Description     :   Accept Division of studetn from user  and display its exam time 
//  Date            :   15/11/2026  
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayScheduler(char chDiv)
{
    if(chDiv == 65 || chDiv == 97 )
    {
        printf("Your Exam at 7 AM\n");
    }
    else if(chDiv == 66 || chDiv == 98 )
    {
        printf("Your Exam at 8:30 AM\n");
    }
    else if(chDiv == 67 || chDiv == 99 )
    {
        printf("Your Exam at 9:20 AM\n");
    }
    else if(chDiv == 68 || chDiv == 100 )
    {
        printf("Your Exam at 10:30 AM\n");
    } 
    else
    {
        printf("Invalid division entered\n");
    }
    
}
int main()
{
    char cValue = '\0';

    printf("Enter Charecter : ");
    scanf("%c", &cValue);

    DisplayScheduler(cValue);

    return EXIT_SUCCESS;
}