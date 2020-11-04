#include <stdio.h>


int main()
{
    int len,sum=0;
    printf("Enter the length of array: ");
    scanf("%d",&len);
    int arr[len];
    int i,j=0;
    int *arr1 = arr;
    printf("Enter elements in array:\n");

    for (i =0; i <len; i++)
    {
        scanf("%d", arr1);
        arr1++;
    }

    arr1 = arr;
    for (i =0; i <len; i++)
    {   sum=sum+ *arr1;

        arr1++;
    }
    printf("Sum of elements in array: %d",sum);
    printf("\n");
    arr1 = arr;
    	while(j<len)
	{
		printf("Address of %d = %d \n",*arr1, arr1);
        arr1++;
		j++;

	}

    return 0;
}
