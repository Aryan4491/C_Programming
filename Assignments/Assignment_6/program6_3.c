 #include<stdio.h>
 #include<stdlib.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CalculateDiscount
//  Input           :   Float (purchase Amount )
//  Output          :   Float
//  Description     :   It is used to calculate the Discount
//  Date            :   22/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////
 float CalculateDiscount(float fNo)
 {
    float fDis = 0.0f;
    float fFinalAmount = 0.0f;

    if ( fNo >= 0 )
    {
        if(fNo < 1000)
        {
            fFinalAmount = fNo;
           
        }
        else if ((fNo >= 1000) &&( fNo < 5000))
        {
            fDis = (fNo / 100)*10;
            fFinalAmount = fNo - fDis; 
           
        }
        else
        {
            fDis = (fNo / 100)*20;
            fFinalAmount = fNo - fDis; 
            
        }
         return fFinalAmount;
    }
    else 
    {
        return -1.0f;       // 
        
    }
}

 int main()
 {
    float fAmount = 0.0f;
    float fRet = 0.0f;

    printf("Enter the amount :");
    scanf("%f", &fAmount);

    fRet =CalculateDiscount(fAmount);

    if(fRet == -1)
    {
        printf("Invalide");
    }
    else
    {   
        printf("Payable Amount = %.2f", fRet);
    }
    return EXIT_SUCCESS;

 }

 /*
 OUTPUT :
 Enter the amount :2000
Payable Amounr = 1800.00
D:\C_Programming\ass6>myexe
Enter the amount :800
Payable Amounr = 800.00
D:\C_Programming\ass6>myexe
Enter the amount :6000
Payable Amounr = 4800.00
*/