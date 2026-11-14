#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   Display
//  Input           :   Integer 
//  Output          :   void
//  Description     :   It is used to print Digit  into words
//  Date            :   31/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    if(iNo > 9 )
    {
        printf("Invalide Number");
    }
    else
    {
        switch(iNo)
        {
            case 0 :
                    printf("Zero");
                    break ;

            case 1 :
                    printf("One");
                    break ;

            case 2 :
                    printf("Two");
                    break ;
                    
            case 3 :
                    printf("Three");
                    break ;

            case 4 :
                    printf("Four");
                    break ;

            case 5 :
                    printf("Five");
                    break ;

            case 6 :
                    printf("Six");
                    break ;

            case 7 :
                    printf("Seven");
                    break ;

            case 8 :
                    printf("Eight");
                    break ;

            case 9 :
                    printf("Nine");
                    break ;
        }
    }
}

int main()
{
    int iValue = 0 ;
    int nine = 9 ;
    int three = 3 ;

    printf("Enter number :");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}