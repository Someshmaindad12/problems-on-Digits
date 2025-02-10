/*
4.Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864
*/
#include<stdio.h>
int Multiplication(int iNo)
{
    int iDigit = 0 ; 
    int Multi = 1 ; 
    while(iNo > 0 )
    { 
        iDigit = iNo %10;
        Multi = Multi * iDigit;
        iNo = iNo /10;
    }
    return Multi;
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ; 
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    iRet =Multiplication(iValue);
    printf("Multiplication of Digits are : %d\n",iRet);
    
    return 0;
}