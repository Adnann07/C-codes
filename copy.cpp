#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    cout<<"copied array: "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
