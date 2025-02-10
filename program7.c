#include<stdio.h>
int SumEvenDigits(int iNo )
{
    int iSum = 0 ; 
    int iDigit = 0 ; 
    if(iNo < 0 )
    {
        iNo  = -iNo;
    }
    while(iNo > 0 )
    {
        iDigit = iNo % 10 ;
        if(iDigit % 2 == 0 )
        {
             iSum = iSum+iDigit;
        } 
       
        iNo = iNo/10;
    }
    return iSum;
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ; 
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = SumEvenDigits(iValue);
    printf("Sum of Even Digits is : %d\n",iRet);

    return 0 ;
}