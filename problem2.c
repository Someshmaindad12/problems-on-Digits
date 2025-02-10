/*
2.Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero
*/
#include<stdio.h>
#include<stdbool.h>
bool ChkNum(int iNo )
{
    int iDigit = 0 ; 
    while(iNo > 0 )
    {
        iNo %10 ;
        if(iNo %10 == 0 )
        {
            return true ;
        }
        iNo = iNo /10;
    }
    return false;
}
int main()
{
    int iValue = 0 ; 
    bool bFlag = false ;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    bFlag = ChkNum(iValue);
    if(bFlag == true )
    {
        printf("ZERO found ...\n");

    }
    else 
    {
        printf("ZERO NOT found...");
    }

    return 0;
}