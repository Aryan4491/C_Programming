#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   DisplayGrade
//  Input           :   float fNo
//  Output          :   void
//  Description     :   Validates the entered marks and displays the 
//                      corresponding student grade (A, B, C, D, or Fail).
//  Date            :   21/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////

void DisplayGrade(float fNo)
    {
      if(fNo <=100)
      {         
                if (90 < fNo) 
                {
                    printf("Grade A");

                }
                else if ((75 < fNo) && (fNo < 89 ))
                {
                    printf("Grade B");
                }
                else if ((60 < fNo) && (fNo< 74 ))
                {
                    printf("Grade C");
                }
                else if ((40 <= fNo) && (fNo < 59 ))
                {
                    printf("Grade D");
                }
                else if ( fNo< 40 )
                {
                    printf("Fail");
                }
            else
            {
                printf("Ivalide Number");
            }
      }
    }

        
int main()
{
    float fmarks = 0.0f;
    printf("Enter maraks : ");
    scanf("%f",&fmarks);

    DisplayGrade(fmarks);


    return EXIT_SUCCESS;
}