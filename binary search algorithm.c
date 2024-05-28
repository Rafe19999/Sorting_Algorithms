#include<stdio.h>
int main()
{
    int arr[100],mid,n,i,data;
    printf("How many array elements you want: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the data you want find: ");
    scanf("%d",&data);
    int l=0;
     int r=n-1;
     mid=(l+r)/2;
    while (l<=r)
    {

        if(data==arr[mid])
        {
            printf("The value is found at %d",mid+1);
            break;
        }
        else if(data>arr[mid])
        {
            l=mid+1;
             mid=(l+r)/2;
        }
        else if(data<arr[mid])
        {
             r=mid-1;
             mid=(l+r)/2;
        }
        else
        {
            printf("The value is not found");

        }
    }
    return 0;
}
