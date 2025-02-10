#include<stdio.h>
int Reverse(int iNo )
{
    int Rev = 0 ; 
    int iDigit = 0 ; 
    while(iNo > 0 )
    {
        iDigit = iNo % 10 ; 
        Rev = Rev *10 +iDigit;
        iNo = iNo/10;
    }
    return Rev;
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ; 
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = Reverse(iValue);
    printf("Reverse  Digits is : %d\n",iRet);

    return 0 ;
}