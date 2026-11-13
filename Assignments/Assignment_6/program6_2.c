#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CheckAddmission
//  Input           :   Float (Marks) ,Integer(Age)
//  Output          :   void
//  Description     :   It is used to check Admission Eligibility
//  Date            :   22/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////
void CheckAddmission(float fNo , int iNo)
{   
    if ((fNo <=100) && (iNo >= 0))
    {
        if((fNo >= 60) && (iNo >= 17 ))
        {
            printf("Eligible of Addmition");
        }
        else
        {
            printf("Not Eligible");
        }
    }
    else
    {
        printf("Invalid Input");
    }
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0 ;

    printf("Enter Marks and Age :");
    scanf("%f %d", &fMarks,&iAge);

    CheckAddmission(fMarks,iAge);

    return EXIT_SUCCESS;

}