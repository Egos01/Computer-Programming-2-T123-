#include<stdio.h>

int main()
{
    int arr[10], size, i, sum = 0;

    printf("Enter size of the array: ");
    scanf("%d",&size);
    for(i = 0; i < size; i++)
    {
        printf("Enter Elements %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < size; i++)
    {
          sum+=arr[i];
    }
    printf("Sum of all array elements = %d\n",sum);
    return 0;
}
