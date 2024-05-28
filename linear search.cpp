#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n,val,pos=-1;
    cout<<"How many numbers you want: ";
    cin>>n;
    cout<<"Enter the numbers: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Which number you want to find: ";
    cin>>val;
    for(i=0;i<n;i++)
    {
        if(val==arr[i])
        {
            pos=i+1;
            break;
        }
    }

    if(pos==-1)
    {
        cout<<"Not found";
    }
    else
    {
        cout<<pos;
    }
    return 0;

}
