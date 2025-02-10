/*
3.Write a program which accept number from user and return the count of digits in
between 3 and 7.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 4521
Output : 2
Input : 9922
Output : 0
*/
#include<stdio.h>
int Count(int iNo )
{
    int iCount = 0 ; 
    int iDigit = 0 ; 
    while(iNo > 0 )
    {
        iDigit = iNo %10 ; 
        if((iDigit >  3 ) && (iDigit <7) )
        {
            iCount++;
        }
        iNo = iNo /10;
    }
    return iCount;
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    iRet = Count(iValue);
    printf("Count of Numbers between 3 to 7 is : %d\n",iRet);

    return 0;
}