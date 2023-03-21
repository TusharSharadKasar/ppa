#include<stdio.h>

void ReverseFact(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
      iNo = -iNo;
    }
    for(i = iNo-1; i > 0; i--)
    {
        if( (iNo % i) == 0)
        {
            printf("%d",i);
        }
    }
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    ReverseFact(iValue);
    
    return 0;
}