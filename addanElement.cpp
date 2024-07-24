
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int x;
    cout<<"Enter element you want to add at the end: "<<endl;
    cin>>x;

    a[n]=x;
    n++;

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;

    }



}
