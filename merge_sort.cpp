#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i = l;
    int j = m+1;
    int k = l;
    int temp[5];

    while(i<= m && j<=r)
    {
        if(arr[i]<= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }

    }
    while(i<=m)
    {
        temp[k] = arr[i];//copying all elements from left subarray to temp as it is
        k++;
        i++;

    }
    while(j<=r)
    {
        temp[k] = arr[j];//copying all elements from right subarray to temp as it is
        k++;
        j++;

    }
    for(i = l; i<k; i++)
    {
        arr[i]=temp[i];
    }
}
void mergeSort(int arr[],int l, int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int arr[5];
    cout<<"Enter 5 element: "<<endl;
    for(int i = 0; i<5; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before mergesort"<<endl;
    for(int i =0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,4);
    cout<<endl<<"After mergesort"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

}

