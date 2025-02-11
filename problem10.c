/*
5.Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits.
Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)
*/
#include<stdio.h>
int Difference(int iNo )
{
    int iDigit= 0 , iEvenSum = 0 , iOddSum = 0 , iDifference = 0 ;
    while(iNo > 0 )
    {
        iDigit = iNo %10 ;
        if(iDigit %2 == 0 )
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo /10;
       
    }
    iDifference = iEvenSum - iOddSum;
    return iDifference;
}
int main()
{

    int iValue = 0 ; 
    int iRet = 0 ; 
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    iRet = Difference(iValue);
    printf("Difference between OddSum and EvenSum is : %d\n ",iRet);
    return 0;
}