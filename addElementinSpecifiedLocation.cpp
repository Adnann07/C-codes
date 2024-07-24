#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int x;
    int pos;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter element you wish to add: "<<endl;
    cin>>x;
    cout<<"Enter position where you want to replace the element: "<<endl;
    cin>>pos;
    a[pos-1]=x;

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }


}

