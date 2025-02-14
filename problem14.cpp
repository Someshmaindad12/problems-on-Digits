/*
Write a program that accepts a number from the user and displays its largest and smallest digits.

Input: 2395
Output: Largest: 9, Smallest: 2

Input: 1018
Output: Largest: 8, Smallest: 0

Input: -1018
Output: Largest: 8, Smallest: 0

Input: 9000
Output: Largest: 9, Smallest: 0
*/
#include<iostream>
using namespace std;
class Number 
{
    public:
   int iNo ; 
   Number(int iValue)
   {
    iNo = iValue;
   }
   void Display()
   {
    int iDigit = 0 ; 
    int iSmallest = 9 ; 
    int iLargest = 0 ; 
    int temp = iNo;
    
    while(temp > 0 )
    {
        iDigit = temp %10 ; 
        if(iDigit < iSmallest)
        {
            iSmallest = iDigit ;
        }
        if(iDigit > iLargest)
        {
            iLargest = iDigit;
        }
        temp = temp/10;
    }
    printf("Largest Number is : %d\n",iLargest);
    printf("Smallest Number is %d\n ",iSmallest);
   }
};
int main()
{
    int iValue = 0 ; 
    printf("Enter Number : ");
    cin>>iValue;
   Number nobj(iValue);
   nobj.Display();


    return 0;
}