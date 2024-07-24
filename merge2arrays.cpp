#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cout<<"First array size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter first array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Second array size: "<<endl;
    cin>>m;
    int b[m];
    cout<<"Enter second array: "<<endl;

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int merge[n+m];

    for(int i=0;i<n;i++)
    {
        merge[i]=a[i];
    }

    for(int i=0;i<m;i++)
    {
        merge[m+i]=b[i];
    }
    cout<<"Merged array: "<<endl;
    for(int i=0;i<n+m;i++)
    {
        cout<<merge[i]<<endl;
    }


}
