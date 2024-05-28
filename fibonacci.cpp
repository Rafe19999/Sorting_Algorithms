#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,i;
    cout<<"How many element you want as an input: ";
     cin>>n;
     arr[0]=0;
     arr[1]=1;
     for(i=2;i<=n;i++)
     {
         arr[i]=arr[i-1]+arr[i-2];
     }
     cout<<"Fibonacci elements are: ";
     for(i=1;i<=n;i++)
     {
        cout<<arr[i]<<" ";
     }
     return 0;
}

