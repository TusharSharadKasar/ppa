#include<stdio.h>

int SumNonFact(int iNo)
{
    int i = 0, iSum = 0;
    if(iNo <= 0)
    {
      iNo = -iNo;
    }
    for(i = 1; i< iNo; i++)
    {
        if( (iNo % i) != 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Summation of non factors are :%d",iRet);
    return 0;
}