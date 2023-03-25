#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the operation on array
int CheckOccurance(int Arr[], int iSize)
{
    int iCnt =0, iFrequency = 0;
    //      1           2           3
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)    // 4
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
    
int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iRet = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

   // printf("Enter the element to findout the occurance : \n");
    //scanf("%d",&iValue);

    // Step 4 : Call the function
    iRet = CheckOccurance(ptr, iLength);
    printf("Output is %d",iRet);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}