#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////////////
// 
//  Function name   :   CheckTrinagle
//  Input           :   Integer,Integer,Integer
//  Output          :   bool
//  Description     :   It is used to check Triangle validity
//  Date            :   22/10/2026 
//  Author          :   Aryan Shankar Gole
//
//////////////////////////////////////////////////////////////////////
bool CheckTrinagle (
                        int iSide1,
                        int iSide2,
                        int iSide3 
                    )
{
    if(iSide1 < 0)          //updater
    {
        iSide1 = -iSide1 ;
    }
    if(iSide2 < 0)          //updater
    {
        iSide2 = -iSide2 ;
    }
    if(iSide3 < 0)          //updater
    {
        iSide3 = -iSide3 ;
    }

    if(((iSide1 + iSide2) > iSide3) && ((iSide1 + iSide3) > iSide2) && ((iSide2 + iSide3)> iSide1))
    {
        return true ;

    }
    else
    {
        return false ;

    }

}

int main()
{
    int iSide1 = 0, iSide2 = 0 , iSide3 = 0;
    bool bRet = false ;

    printf("Enter three side : ");
    scanf("%d %d %d", &iSide1 , &iSide2 , &iSide3);

    bRet = CheckTrinagle(iSide1, iSide2 , iSide3);

    if(bRet)
    {
        printf("valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    
    return EXIT_SUCCESS;
}