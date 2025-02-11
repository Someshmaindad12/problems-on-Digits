/*
Write a program that accepts a number from the user and displays the count of digits in it.

Input: 2395
Output: 4

Input: 1018
Output: 4

Input: -1018
Output: 4

Input: 9000
Output: 4
*/
#include<iostream>
using namespace std ;
class Numbers 
{
    public : 
        int iNo ;
        Numbers(int iValue )
        {
            iNo= iValue ;
        }
        int CountDigits()
        {
            if(iNo < 0 )
            {
                iNo = -iNo;
            }
            int iCount = 0  ;
            int iDigit = 0 ; 
            while(iNo  > 0 )
            {
                iDigit = iNo %10;
                iCount++;
                iNo = iNo/10;
            }
            return iCount;
        }
};
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ;
    cout<<"Enter Number : \n";
    cin>>iValue;
    Numbers nobj(iValue);
    iRet = nobj.CountDigits();
    cout<<"Count of Digits is :: "<<iRet<<"\n";

    return 0;
}