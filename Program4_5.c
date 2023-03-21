#include<stdio.h>

int DiffSumFact(int iNo)
{
    int i = 0, iSumN = 0, iSumF = 0, iDiff = 0;
    if(iNo <= 0)
    {
      iNo = -iNo;
    }
    for(i = 1; i< iNo; i++)
    {
        if( (iNo % i) != 0)
        {
            iSumN = iSumN + i;
        }
		else
		{
			iSumF = iSumF + i;
		}
    }
    return iDiff = (iSumF - iSumN);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = DiffSumFact(iValue);
    printf("Differance of non factors and factors are :%d",iRet);
    return 0;
}