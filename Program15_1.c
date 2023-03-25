#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
	int i = 0, iFrequency = 0;

	for(i = 0; i<iSize; i++)
	{
		if((Arr[i] % 2) == 0)
		{
			iFrequency++;
		}
	}
	return iFrequency;
}

int main()
{
	int iRet = 0, iLength = 0, iCnt =0, *ptr = 0;

	printf("Enter number of elements\n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));
	if(ptr == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	} 
	printf("Enter %d elements\n",iLength);
	for(iCnt = 0; iCnt< iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	iRet = CountEven(ptr,iLength);
	printf("Result is %d",iRet);

	free(ptr);
	return 0;
}