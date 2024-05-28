#include<iostream>
using namespace std;
int main()
{
    int temp,sum=0,n,rem;
    cout<<"Enter the number: ";
    cin>>n;
    temp=n;
    while(temp!=0)
    {
       rem=temp%10;
       sum=sum*10+rem;
       temp=temp/10;
    }
    cout<<sum;
    return 0;
}

