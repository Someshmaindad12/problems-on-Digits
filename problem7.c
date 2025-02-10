/*
2.Write a program which accept number from user and return the count of odd
digits.
Input : 2395
Output : 3
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 0
*/
#include<stdio.h>
int OddFreq(int iNo )
{
    int iCount = 0 ; 
    int iDigit = 0 ; 
    while(iNo > 0 )
    {
        iDigit = iNo %10 ; 
        if(iDigit % 2 != 0 )
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
    iRet = OddFreq(iValue);
    printf("Count of ODD Numbers is : %d\n",iRet);

    return 0;
}