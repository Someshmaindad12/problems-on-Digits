/*
1.Write a program which accept number from user and display its digits in reverse
order.
Input : 2395
Output : 5
9
3
2
Input : 1018
Output : 8
1
0
1
Input : -1018
Output : 8
1
0
1
Input : 9000
Output : 0
0
0
9
*/
#include<stdio.h>
int Reverse(int iNo)
{
    int iCnt = 0 ;
    int iRev = 0 ;
    int iDigit = 0 ;  
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ;

    printf("Please Enter Number :\n");
    scanf("%d",&iValue);
    iRet = Reverse(iValue);
    printf("%d\t",iRet);
    return 0;

}