#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CheckVotingEligibility
//  Input           :   Integer 
//  Output          :   void
//  Description     :   checks whether the person is eligible for
//                      voting (age 18 or above).
//  Date            :   21/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iNo)
{
    if (iNo >= 18)
    {
        printf("Eligible for voting");
    }
    else if(iNo <0)
    {
        printf("Invalid age");
    }
    else
    {
        printf("Not Eligible for voting");

    } 

}
int main()
{
    int iAge = 0 ;
    
    printf("Enter your Age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;

}
