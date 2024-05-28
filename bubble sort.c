#include<stdio.h>
int main()
{
    int arr[100],n,i,j,temp;
    printf("how many elements you want inside the array: ");
    scanf("%d",&n);
    printf("Enter the values of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
     printf("Array after implementing bubble sort: ");

    for(i = 0; i < n; i++){

        printf("%d  ", arr[i]);
    }
    return 0;
}
