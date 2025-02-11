/*
Write a program that accepts a number from the user and displays the sum of its digits.

Input: 2395
Output: 19

Input: 1018
Output: 10

Input: -1018
Output: 10

Input: 9000
Output: 9
*/
#include<iostream>
using namespace std ;
class Numbers
{
    public :
    int iNo ; 
    Numbers(int iValue )
    {
        iNo = iValue;
    }

    int SumOfDigits()
    {
        int iDigit = 0 ;
        int iSum = 0 ; 
        while(iNo != 0)
        {
            iDigit =iNo %10;
            iSum =iSum+ iDigit;
            iNo = iNo / 10;
        }
        return iSum;
    }

};
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ;
    cout<<"Enter Number : \n";
    cin>>iValue; 
    Numbers nobj(iValue);
    iRet = nobj.SumOfDigits();
    cout<<"Sum of Digits are : "<<iRet<<"\n";

    return 0;
}