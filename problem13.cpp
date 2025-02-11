/*
Write a program that accepts a number from the user and displays the product of its digits.

Input: 2395
Output: 270

Input: 1018
Output: 0

Input: -1018
Output: 0

Input: 9000
Output: 0
*/
#include<iostream>
using namespace std;
class Numbers
{
    public: 
    int iNo ; 
    Numbers(int iValue )
    {
        iNo=iValue;
    }
    int MultiplicationOfDigits()
    {
        int iDigit = 0 ; 
        int iMultiplication = 1; 
        while(iNo > 0 )
        {
            iDigit = iNo %10 ; 
            iMultiplication = iMultiplication* iDigit;
            iNo = iNo /10;

        }
        return iMultiplication;
    }
};

int main()
{
    int iValue = 0 ;
    int iRet = 0 ; 

    cout<<"Enter Number : \n";
    cin>>iValue;
    Numbers nobj(iValue);
    iRet = nobj.MultiplicationOfDigits();
    cout<<"Multiplication of Digits is : "<<iRet<<"\n";
    

    return 0;
}