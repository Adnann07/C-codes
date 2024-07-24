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
    cout<<"Enter position you wish to delete: "<<endl;
    int pos;
    cin>>pos;
    n--;
    for(int i=0;i<n;i++)
    {
        if(i==pos)
        {
            a[i-1]=a[i];

        }


    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
