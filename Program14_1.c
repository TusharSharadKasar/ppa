#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	 int iCnt =0, iEvenSum = 0, iOddSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    printf("Summation of even elements are : %d\n",iEvenSum);
    printf("Summation of odd elements are : %d\n",iOddSum);
	return (iEvenSum - iOddSum);
}

int main()
{
	int iSize = 0;
	int iRet = 0;
	int iCnt = 0;
	int *p = NULL;
	
	printf("Enter number of elements \n");
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate the memory \n");
		return -1;
	}
	printf("Enter %d elements\n",iSize);
	for(iCnt = 0; iCnt< iSize; iCnt++)
	{
		printf("Enter element : %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
		
	}
	iRet = Difference(p, iSize);
	printf("Result is : %d\n",iRet);

	free(p);
	return 0;
	
}