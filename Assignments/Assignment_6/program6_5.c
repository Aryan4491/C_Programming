#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CalculateBonus
//  Input           :   Float(salary) , Integer(year of service)
//  Output          :   Float
//  Description     :   It is used to calculate employee bonus based on service years
//  Date            :   22/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////
float  CalculateBonus( float fSalary , int iYears)
{
        float fBonus = 0.0f;

        if(iYears > 10)
        {
            fBonus = fSalary* 0.15f ;

        }
        else if((iYears >=5) && (iYears <= 10))
        {
            fBonus = fSalary* 0.10f ;

        }
        else
        {
            fBonus = fSalary* 0.05f;

        }
        
        return fBonus ;  
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0 ;
    float fRet = 0.0f ;

    printf("Enter Salary and Years of Services :");
    scanf("%f %d", &fSalary ,&iYears );

    fRet = CalculateBonus(fSalary ,iYears);

    printf("Bonus = %.2f\n", fRet);

    return EXIT_SUCCESS;

}