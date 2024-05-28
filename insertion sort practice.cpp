#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
    int i,j,key;
    for(j=2;j<=n;j++)
    {
       arr[j]=key;
       i=j-1;
       while(i>=0&&arr[i]>key)
         {
              arr[i+1]=arr[i];
              i=i-1;

         }
         arr[i+1]=key;
    }

}
void print(int arr[],int n)
{
    cout<<"After insetion sort: ";
    for(int j=1;j<=n;j++)
    {
        cout<<arr[j];
    }


}
int main()
{
    int arr[50],n;
    cout<<"How many values you want as an input: ";
    cin>>n;
     cout<<"Enter the array elements: ";
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     insertion(arr,n);
     print(arr,n);

}
