/*
Write a program that accepts a number from the user and prints it in reverse order.

Input: 2395
Output: 5932

Input: 1018
Output: 8101

Input: -1018
Output: 8101

Input: 9000
Output: 9
*/
#include<iostream>
using namespace std;
class Number 
{
    public : 
    int iNo ;
    Number(int iValue )
    {
        iNo = iValue;
    }
    int ReverseNum()
    {
        int iDigit = 0 ; 
        int iRev = 0  ; 
        while(iNo > 0 )
        {
            iDigit = iNo %10 ; 
            iRev = iRev*10+iDigit;
            iNo = iNo /10 ;
        }
        return iRev;
    }
};
int main()
{
    int iValue = 0 ;
    int iRet = 0 ; 
    cout<<"Enter Number : \n";
    cin>>iValue;
    Number nobj(iValue);
    iRet = nobj.ReverseNum();
    cout<<iRet<<"\n";


    return 0;
}