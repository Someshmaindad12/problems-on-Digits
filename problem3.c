/*
3.Write a program which accept number from user and count frequency of 2 in it.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 9000
Output : 0
Input : 922432
Output : 3
*/
#include<stdio.h>
int CountFrequency(int iNo)
{
    int iDigit = 0 ;
    int iCount = 0 ;
    while(iNo > 0 )
    {
        iDigit = iNo %10 ; 
        if(iDigit == 2  )
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
    iRet = CountFrequency(iValue);
    printf("The Frequwncy of 2 is %d :\n",iRet);
    return 0; 
}